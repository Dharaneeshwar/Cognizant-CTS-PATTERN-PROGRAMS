Function getMaxLengthOfContinuousChar - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the program.
The function getMaxLengthOfContinuousChar(char str[], int len) accepts a string str and length len as the input. The function is supposed to return the most consecutively repeated character.
Your task is to fill in the missing lines of code so that the program passes all test cases.
char getMaxLengthOfContinuousChar(char str[], int len)
{
    int count,max=0;
    int i=0;
    char c;
    while(i<len){
        count=1;
        int j=i+1;
        while(j<len){
            if(str[i]==str[j]){
                count++;
            }
            else{
                break;
            }
            j++;
        }
        if(count>max){
            max=count;
            c=str[i];
        }
        i+=count;
    }
    return c;
}
