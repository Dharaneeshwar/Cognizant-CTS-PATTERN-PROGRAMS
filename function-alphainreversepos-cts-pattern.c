Function alphaInReversePos - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function alphaInReversePos(char *str) accepts a string str as the input. It is supposed to return the alphabets by transforming each alphabets in the string to the alphabets present at the reverse position (i.e. 'a' is transformed to 'z', 'b' is transformed to 'y' and so on). The space must be retained in same position without any modification.
The function looks fine but gives a logical error.
Your task is to fix the program so that it passes all test cases.
void alphaInReversePos(char *str)
{
    int index=0, len= strlen(str);
    for(index=0; index<len; index++)
    {
        if(str[index]==' '){
            printf(" ");
        }
        else{
            printf("%c",(122-str[index])+97);
        }
    }
}
