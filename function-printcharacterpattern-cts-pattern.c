Function printCharacterPattern - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printCharacterPattern(int num) accepts an integer num. It is supposed to print the pattern as shown in the Example Input/Output section.
Your task is to correct the given code so that it passes all test cases.
Example Input/Output:
Input:
4
Output:
a
ab
abc
abcd
void printCharacterPattern(int num)
{
    int i, j;
    char ch = 'a';
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++){
            printf("%c",'a'+j-1);
        }
        printf("\n");
    }
}
