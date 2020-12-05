Function printMultiples - CTS PATTERN
Author
letuscrack
Function printMultiples: You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printMultiples(int n, int x) accepts two integers n and x as the input. The function is supposed to print all the multiples of x from 1 to n.
The function compiles fine but fails to print the desired result due to logical error.
Your task is to debug the program to pass all the test cases.
void printMultiples(int n, int x)
{
    for(int ctr = 1; ctr <= n; ctr++)
    {
        if(x % ctr == 0)
        {
            printf("%d ", ctr);
        }
    }
}
void printMultiples(int n, int x)
{
    for(int ctr = 1; ctr <= n; ctr++)
    {
        if(ctr % x == 0)
        {
            printf("%d ", ctr);
        }
    }
}
