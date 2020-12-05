Function multiplyNum - CTS PATTERN
Author
letuscrack
You are required to correct the syntax of the given code without changing its logic. You can click on Compile & Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function multiplyNum(int a, int b, int c) accepts three integers a, b and c as inputs. It is supposed to return the multiplicative product of the maximum two of three input numbers.
The function looks fine but gives a compilation error.
Your task is to fix the program so that it passes all test cases.
int multiplyNum(int a, int b, int c)
{
    int result, min, mid, max;
    max = (a > b) ? ((a > c) ? a : c):((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c):((b <c ) ? b : c);
    mid = (a + b + c) - (min + max);
    int result = (max * mid);
    return result;
}
