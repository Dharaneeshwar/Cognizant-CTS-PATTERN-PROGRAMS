Function Subtraction of Multiplicative Product - CTS PATTERN
Author
letuscrack
You are required to correct the syntax of the given code without changing its logic. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printValue(int a, int b, int c) accepts three integers a, b and c as input. It is supposed to return the value when the second maximum is subtracted from the multiplicative product of the maximum and minimum of three input numbers.
The function compiles fine but fails to return the desired results for some test cases. 
Your task is to fix the program so that it passes all test cases.
Given Code:
int printValue(int a, int b, int c)
{
    int result, min, mid, max;
    max = (a > b) ? ((a > c) ? a : c):((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c):((b <c ) ? b : c);
    mid = (a + b + c) - (min + max);
    result = (max * mid - min);
    return result;
}
Correct Code:
int printValue(int a, int b, int c)
{
    int result, min, mid, max;
    max = (a > b) ? ((a > c) ? a : c):((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c):((b <c ) ? b : c);
    mid = (a + b + c) - (min + max);
    result = abs(mid-(max*min));
    return result;
}
