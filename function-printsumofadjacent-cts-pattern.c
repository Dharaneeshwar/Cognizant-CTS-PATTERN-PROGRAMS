Function printSumOfAdjacent - CTS PATTERN
Author
letuscrack
Function printSumOfAdjacent: You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printSumOfAdjacent(int arr[], int len) accepts an integer array arr of length len as the input. The function is supposed to print the sum of adjacent integer(s) of each integer in the array.
The function compiles successfully but fails to print the desired result due to logical errors.
Your task is to fix the program so that it passes all test cases.
void printSumOfAdjacent(int arr[], int len)
{
    int index;
    printf("%d ", arr[0]);
    for(index = 0; index < len; index++)
    {
        printf("%d ", arr[index - 1] + arr[index + 1]);
    }
    printf("%d", arr[len - 1]);
}
void printSumOfAdjacent(int arr[], int len)
{
    int index;
    printf("%d ", arr[1]);
    for(index = 1; index < len-1; index++)
    {
        printf("%d ", arr[index - 1] + arr[index + 1]);
    }
    printf("%d", arr[len - 2]);
}
