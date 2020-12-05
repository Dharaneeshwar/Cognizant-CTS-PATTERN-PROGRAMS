Function descendingSortArray – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method descendingSortArray accepts two arguments SIZE, an integer value representing the size of the array and arr, a list of integers representing the array.
The function/method descendingSortArray perform an in-place sort on the given input array which will be sorted in descending order.
The function/method descendingSortArray compiles successfully but fails to get the desired result for some test cases. Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
8
3 14 5 23 10 30 15 13
Output:
30 23 15 14 13 10 5 3
Explanation:
The given 8 integers are 3, 14, 5, 23, 10, 30, 15 and 13.
After sorting the integers in descending order, the array becomes 30, 23, 15, 14, 13, 10, 5 and 3.
Hence the output is 30 23 15 14 13 10 5 3.
Example Input/Output 2:
Input:
7
79 53 36 9 77 48 24
Output:
79 77 53 48 36 24 9
void descendingSortArray(int SIZE, int *arr)
{
    int temp;
    for(int i=0; i<SIZE-1; i++)
    {
        for(int j=i+1; j<SIZE; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
