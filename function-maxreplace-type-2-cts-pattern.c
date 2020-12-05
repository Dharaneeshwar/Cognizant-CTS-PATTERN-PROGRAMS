Function maxReplace (type-2) – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method maxReplace accepts two arguments - SIZE and arr, an integer representing the size of the array arr and the integer array arr.
The function/method maxReplace is supposed to replace all the integers in the array with the maximum element in the array. Finally, the function must print the modified array.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
8 3 2 9 3 4
Output:
9 9 9 9 9 9
Explanation:
The given 6 integers are 8, 3, 2, 9, 3 and 4.
Here the maximum integer is 9.
So the integers in the array are replaced with 9.
Hence the output is 
9 9 9 9 9 9
Example Input/Output 2:
Input:
7
39 78 67 49 73 55 22
Output:
78 78 78 78 78 78 78
void maxReplace(int SIZE, int *arr)
{
    int i;
    int max = arr[0];
        for(int i=0; i<SIZE; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
    for(i=0; i<SIZE; i++)
    {
        arr[i] = max;
        printf("%d ", arr[i]);
    }
}
