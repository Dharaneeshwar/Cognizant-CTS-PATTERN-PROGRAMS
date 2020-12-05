Function findMinElement - CTS PATTERN
Author
letuscrack
You are required to implement the function by using the helper functions. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the function.
The function findMinElement(int *arr1, int M, int *arr2, int N) accepts two arrays arr1 and arr2 of size M and N respectively. It is supposed to the return the minimum elements in both the arrays.
Your task is to use sortArray(int *arr, int N) function and complete the code in findMinElement(int *arr1, int M, int *arr2[], int N) so that it passes all test cases.
int *findMinElement(int *arr1, int M, int *arr2, int N)
{
    sortArray(arr1, M);
    sortArray(arr2, N);
    int *newArr = malloc(sizeof(int) *2);
    newArr[0] = arr1[0];
    newArr[1] = arr2[0];

    return newArr;
}
