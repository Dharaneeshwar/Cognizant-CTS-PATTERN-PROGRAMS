Function matrixTopView - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function matrixTopView(int R, int C, char mat[R][C])  accepts a character matrix mat of size RxC as the input. The function is supposed to print the first alphabet in each column.
The function compiles successfully but fails to print the desired result due to logical error.
Your task is to debug the program to pass all the test cases.
void matrixTopView(int R, int C, char mat[R][C])
{
    for(int row = 0; row < C; row++)
    {
        for(int col = 0; col < R; col++)
        {
            if(isalpha(mat[col][row]))
            {
                printf("%c", mat[col][row]);
                break;
            }
        }
    }
}
