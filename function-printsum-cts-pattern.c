Function printSum - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing existing functions. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in given implementation. We do not expect you to modify the approach.
The function printSum(int arr1[], int arr2[], int arr3[], int X, int Y, int Z) accepts three integer array arr1 of length X, arr2 of length Y and arr3 of length Z as the input. The function is supposed to print double the time of sum if the sum of common integers in the given three arrays is odd. Else the function is supposed to print the sum of common integers in the given three arrays.
You have to complete the code to make it work. Another function sumOfCommonElements(int *arr1, int *arr2, int *arr3, int X, int Y, int Z) is available to returns the sum of common integers in the given three arrays, which you are supposed to use inside the function printSum to complete the code.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
5 3 2
4 6 8 9 11
4 6 12
4 6
Output:
10
Example Input/Output 2:
Input:
6 4 3
1 2 3 4 5 6
1 2 4 7
1 2 4
Output:
14
void printSum(int arr1[], int arr2[], int arr3[], int X, int Y, int Z)
{
    int temp=sumOfCommonElements(arr1, arr2, arr3, X, Y, Z);
    if((temp%2)==0)
    printf("%d",temp);
    else
    printf("%d",temp*2);
}
