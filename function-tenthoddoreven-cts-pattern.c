Function tenthOddOrEven - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function tenthOddOrEven(int N) accepts an integer N as the input. The function is supposed to print "Even" if the tenth digit of N is even. Else the function is supposed to print "Odd".
The function compiles fine but fails to print the desired result due to logical error.
Your task is to fix the program so that it passes all test cases.
Given Code:
void tenthOddOrEven(int N)
{
    if(N&1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}
Correct Code:
void tenthOddOrEven(int N)
{
    if(((N%100)/10)&1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}
