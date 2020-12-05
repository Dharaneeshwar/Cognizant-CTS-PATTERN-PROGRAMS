Function printCharAtOddPos - CTS PATTERN
Author
letuscrack
You are required to correct the syntax of the given code without changing its logic. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printCharAtOddPos(char *str) accepts a string str as the input. The function is supposed to print only the characters at the odd positions in the string str.
The function compiles fine but fails to print the desired result due to logical errors.
Your task is to fix the program so that it passes all test cases.
void printCharAtOddPos(char *str)
{
    int index=0,len=strlen(str);
    while(index < len)
    {
        if(index%2==0)
        printf("%c", str[index]);
        index+=1;
    }
}
