Function calculateMatrixSum – CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function calculateMatrixSum(int row, int column, int matrix[row][column]) accepts a matrix of size row*column. It is supposed to return the sum of odd elements whose ith and jth index are same.
The function compiles fine but fails to return the desired result for some test cases.
You will have to complete the code to make it work for all test cases.
int calculateMatrixSum(int row, int column, int matrix[row][column])
{
    int i,j,sum=0;
    if((row>0||column>0))
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(i==j)
                {
                    if(matrix[i][j]/%2!=0)
                        sum+=matrix[i][j];
                }
            }
        }
        return sum;
    }
    else
        return sum;
}
