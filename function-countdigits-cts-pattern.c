Function countDigits - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function countDigits(int num) is supposed to return the remainder when the input argument num (num>0) is divided by the number of digits in num.
The function compiles successfully but fails to return the desired result due to logical errors.
Your task is to debug the program to pass all test cases
int countDigits(int num)
{
    int count=0,a=num;
    while(a>0)
    {
        count++;
        a/=10;
    }
    return (num%count);
}
