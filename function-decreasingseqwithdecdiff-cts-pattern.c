Function decreasingSeqWithDecDiff - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function decreasingSeqWithDecDiff(int N, int D) accepts two integers N and D as the input. The function is supposed to print the sequence starting from N-D, with the subsequent terms decreasing by D-1, D-2 and so on till D-k from the previous term till D-K becomes 1.
The function compiles successfully but fails to print the desired result due to logical error.
Your task is to debug the program to pass all the test cases.
void decreasingSeqWithDecDiff(int N, int D)
{
    while(N!=1 && D!=0)
    {
        N  = N - D;
        printf("%d ", N);
        D=D-1;
    }
}
