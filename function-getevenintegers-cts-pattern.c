Function getEvenIntegers – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method getEvenIntegers accepts three arguments - SIZE, arr and countPtr, an integer representing the size of the array, the integer array arr and a pointer to an integer countPtr.
The function/method getEvenIntegers is supposed to return an array of integers containing the even integers in the given array arr and assign the number of even integers in the given array to the countPtr's value. If there is no even integer in the array arr, then the function must return an array of size 1 with the value -1 and assign 1 to the countPtr's value.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
8
12 5 9 17 26 30 54 5
Output:
12 26 30 54
Explanation:
The given 8 integers are 12, 5, 9, 17, 26, 30, 54 and 5.
In the given 8 integers, the even integers are 12, 26, 30 and 54.
Hence the output is 12 26 30 54.
Example Input/Output 2:
Input:
5
87 21 3 19 15
Output:
-1
int* getEvenIntegers(int SIZE, int *arr, int *countPtr)
{
    int *evenArr;
    evenArr=(int *)malloc(sizeof(int)*SIZE);
    int evenCount = 0,flag=0;
    for(int index = 0; index < SIZE; index++)
    {
        if(arr[index] % 2 == 0)
        {
            evenArr[evenCount++] = arr[index];
            flag=1;
        }
    }
    for(int i=0;i<evenCount;i++){
        printf("%d ",evenArr[i]);
    }
    if(flag == 0)
    {
        evenArr[0] = -1;
        *countPtr = 1;
        return evenArr;
    }
    return evenArr;
}
