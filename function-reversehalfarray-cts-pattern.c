Function reverseHalfArray – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method reverseHalfArray accepts two arguments - SIZE, an integer value representing the size of the array and arr, representing an integer array.
The function/method reverseHalfArray must modify the array by reversing the second half of the array. If the size of the array is odd then consider the middle integer as the second half of the array.
The function/method reverseHalfArray compiles successfully but fails to get the desired result for some test cases. Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
18 5 10 4 10 16
Output:
18 5 10 16 10 4
Explanation:
The given 6 integers are 18, 5, 10, 4, 10 and 16.
After reversing the second half of the array, the array becomes 18, 5, 10, 16, 10 and 4.
Hence the output is 18 5 10 16 10 4.
Example Input/Output 2:
Input:
7
49 28 29 12 34 24 41
Output:
49 28 29 41 24 34 12
void reverseHalfArray(int SIZE, int *arr)
{
	int index, temp, len=SIZE;
	int mid=len/2;
    while(mid<len)
    {
        temp = arr[mid];
        arr[mid] = arr[len-1];
        arr[len-1] = temp;
        mid++;
        len--;
    }
}
