Function printString - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing the existing functions. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the program.
The function printString(char *str, int X, int Y) accepts a string str and two integers X and Y as the input. The function is supposed to print the string str after removing the first X character(s) and the last Y character(s).
Another function removeLastYCharacters(char *str, int Y) (which removes the last Y characters from the string str) is available, which you are supposed to use inside the function printString to complete the code.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output:
Input:
apple 1 2
Output:
pp
void printString(char *str, int X, int Y)
{
    removeLastYCharacters(str,Y);
    for(int ele=X;ele<strlen(str);ele++)
    {
        printf("%c",str[ele]);
    }
}
