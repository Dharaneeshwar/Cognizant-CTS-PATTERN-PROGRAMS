Function compressString - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function compressString(char *str) accept a string str as the input. The function is supposed to print the compressed string as shown in the Example Input/Output Section.
The function compiles fine but fails to print the desired result.
Your task is to fix the program so that it passes all test cases.
Example Input/Output:
Input:
aaabbcccc
Ouput:
a3b2c4
void compressString(char *str)
{
    int count, len=strlen(str),i=0;
    while(i<len)
    {
        int j=i+1;
        count=1;
        while(j<len)
        {
            if(str[i]==str[j]){
                count++;
            }
            else{
                break;
            }
            j+=1;
        }
        printf("%c%d", str[i], count);
        i+=count;
    }
}
