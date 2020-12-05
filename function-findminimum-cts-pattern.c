Function findMinimum - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function findMinimum(int arr[], int len) accepts an integer array arr of length len as the input. The function is supposed to return the smallest integer among the given integers in the array.
The function compiles fine but fails to return the desired result due to logical error.
Your task is to fix the program so that it passes all test cases.
Given Code:
int findMinimum(int arr[], int len)
{
    int index, min = 0;
    for(index = 0; index < len; index++)
    {
        if(arr[index] < min)
        {
            min = arr[index];
        }
    }
    return min;
}
Correct Code:
int findMinimum(int arr[], int len)
{
    int index, min = arr[0];
    for(index = 1; index < len; index++)
    {
        if(arr[index] < min)
        {
            min = arr[index];
        }
    }
    return min;
}
