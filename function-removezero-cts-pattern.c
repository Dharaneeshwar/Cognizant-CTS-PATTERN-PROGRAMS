Function removeZero - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function removeZero(int N) accepts an integer N as the input. The function is supposed to print the integer by removing zero's at the last.
The function compiles successfully but fails to print the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
void removeZero(int N)
{
    while((N%10)==0)
    {
        N/=10;
    }
    printf("%d",N);
}
