Function printFibonacci – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method printFibonacci accepts an argument - N, representing an integer value.
The function/method printFibonacci must print the first N numbers of the Fibonacci series.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
5
Output:
0 1 1 2 3
Explanation:
Here N = 5.
The first 5 Fibonacci series are 0, 1, 1, 2 and 3.
Hence the output is 
0 1 1 2 3
Example Input/Output 2:
Input:
8
Output:
0 1 1 2 3 5 8 13
void printFibonacci(int N)
{
    long num1 = 0;
    long num2 = 1;
    long sum=1;
    printf("0 ");
    for(int i = 2; i <= N; ++i)
    {
        printf("%ld ", sum);
        sum = num1+num2;
        num1 = num2;
        num2 = sum;
    }
}
