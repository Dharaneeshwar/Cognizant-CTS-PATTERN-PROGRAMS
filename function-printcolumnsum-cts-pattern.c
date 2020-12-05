Function printColumnSum - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the program.
The function printColumnSum(int N, int matrix[N][N]) accepts a matrix of size NxN as the input. It is supposed to print the the maximum column-wise sum of the matrix.
Your task is to fill in the missing lines of code so that the program passes all test cases.
int printColumnSum(int N, int matrix[N][N])
{
    int max=0,sum=0;
    for(int i=0; i<N; i++)
    {
        sum=0;
        for(int j=0; j<N; j++)
        {
            sum+=matrix[j][i];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    return max;
}
