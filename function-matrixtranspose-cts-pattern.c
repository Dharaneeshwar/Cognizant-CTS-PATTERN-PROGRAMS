Function matrixTranspose - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing existing functions. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the program.
The function matrixTranspose(int N, int mat[N][N]) accepts an integer matrix of size NxN as the input. The function is supposed to print the transpose of the matrix.
You have to complete the code to make it work. Another function printRow(int N, int row, int mat[N][N]) (where the transposed row printed) is available, which you are supposed to use inside the function matrixTranspose to complete the code.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output:
Input:
3
1 2 3
4 5 6
7 8 9
Output:
1 4 7
2 5 8
3 6 9
void matrixTranspose(int N, int mat[N][N])
{
    for(int i=0;i<N;i++){
        printRow(N,i,mat);
    }
}
