Function productMatrix – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method productMatrix accepts three arguments - R, an integer representing the rows of the matrix. C, an integer representing the columns of the matrix and matrix, a two-dimensional array of integers.
The function/method productMatrix returns an integer representing the product of the odd elements whose ith and jth indices are the same. Otherwise, it returns 0.
The function/method productMatrix compiles successfully but fails to return the desired result for some test cases. Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
7 7
2 9 9 2 2 3 9
5 3 1 6 2 7 9
7 7 8 3 1 5 6
3 3 8 5 1 3 2
7 2 5 1 5 9 7
5 9 9 7 4 7 7
8 7 2 9 4 6 4
Output:
525
Explanation:
The integers in the matrix whose row and column indices are equal are highlighted below.
2 9 9 2 2 3 9
5 3 1 6 2 7 9
7 7 8 3 1 5 6
3 3 8 5 1 3 2
7 2 5 1 5 9 7
5 9 9 7 4 7 7
8 7 2 9 4 6 4
The product of the odd integers 3, 5, 5 and 7 is 525.
Example Input/Output 2:
Input:
4 5
8 6 3 8 9
8 4 6 4 9
7 4 2 8 9
6 8 6 6 5
Output:
0
int productMatrix(int R, int C, int matrix[][C])
{
    int result = 1, flag=0;
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(i == j)
            {
                if(matrix[i][j]%2!=0){
                    result *= matrix[i][j];
                    flag=1;
                }
            }
        }
    }
    if(flag==0)
    {
        return 0;
    }
    else
    {
        return result;
    }
}
