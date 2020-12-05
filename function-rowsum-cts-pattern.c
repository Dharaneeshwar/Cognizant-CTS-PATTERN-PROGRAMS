Function rowSum - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function rowSum(int **matrix, int m, int n) accepts an integer matrix of size m and n as the input. It is supposed to return the sum of each row in the matrix.
You will have to complete the code to make it work for all test cases.
typedef struct _numbers
{
    int numbers[1000];
    int size;
} Numbers;
Numbers* rowSum(int *matrix, int m, int n)
{
    Numbers *obj = malloc(sizeof(Numbers*));
    int ind = 0;
    for (int row = 0; row < m; ++row)
    {
        int sum = 0;
        for (int col = 0; col < n; ++col)
        {
            sum += matrix[row *n + col];
        }

        obj->numbers[ind++] = sum;
    }

    obj->size = ind;

    return obj;
}
