Function reverseN - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function reverseN(int N) accepts an integer N as the input. The function is supposed to print the digits of N in reverse order as the output.
The function compiles fine but fails to print the desired results for some test cases. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output 1:
Input:
1200
Output:
21
void reverseN(int N)
{
    int rev = 0;
    while(N > 0)
    {
        rev = rev * 10 + (N % 10);
        N /= 10;
    }
    printf("%d", rev);
}
