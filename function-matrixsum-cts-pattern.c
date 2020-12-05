﻿Function matrixSum - CTS PATTERN
Author
letuscrack
You are required to correct the syntax of the given code without changing its logic. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function matrixSum(int *matrix, int m, int n) is supposed to return the sum of elements of the input array matrix having m rows and n columns.
The function looks fine but fails to return the desired result due to compilation and logical errors.
Your task is to fix the program so that it passes all test cases.
Given Code:
int matrixSum(int &matrix,int m,int n)
{
    int i,j,sum=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum+=(matrix(i)(j));
        }
    }
    return sum;
}
Correct Code:
int matrixSum(int *matrix,int m,int n)
{
    int i,j,sum=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum+=matrix[i*n+j];
        }
    }
    return sum;
}
