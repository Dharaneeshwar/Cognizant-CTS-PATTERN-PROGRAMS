Function sumElement – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method sumElement accepts three arguments SIZE, an integer value representing the size of the array. K, an integer value representing the input number and arr, a list of integers representing the input array.
The function/method sumElement return an integer value representing the sum of the integers which are greater than twice the input number and present at the even index.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
8 5
13 2 6 11 16 24 8 20
Output:
29
Explanation:
Here N=8 and K=5.
The integers which are greater than 10 and present in the even indices are 13 and 16.
The sum of 13 and 16 is 29. So 29 is printed as the output.
Example Input/Output 2:
Input:
7 8
7 10 12 18 15 17 5
Output:
0
int sumElement(int SIZE, int K, int *arr)
{
    int sum = 0;
    for(int index = 0; index < SIZE; index++)
    {
        if(arr[index] > 2*K && index%2 == 0)
        {
            sum += arr[index];
        }
    }
    return sum;
}
