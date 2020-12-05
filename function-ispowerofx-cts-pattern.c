Function isPowerOfX - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function isPowerOfX(int N, int X) accepts two integers N and X as the input. The function is supposed to return 1 if N is a power of X. Else the function is supposed to return 0.
The function compiles fine but fails to return the desired result due to logical error.
Your task is to fix the program so that it passes all test cases.
int isPowerOfX(int N, int X)
{
    if(X==0)
    return 0;
    while(N % X == 0)
    {
        N = N/X;
    }
    if(N == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
