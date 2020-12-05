Function manchester (type-2) – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method manchester accepts two arguments - SIZE and arr,an integer representing the size of the array arr and the integer array arr respectively. Each element of the array arr represents a bit 0 or 1.
The function/method manchester must print the integers in the array based on the following conditions.
- For each element in the array arr, the count is incremented if the bit arr[i] is same as arr[i-1]. Then the function manchester prints the counter value .
- If the bit arr[i] and arr[i-1] are different, then the function manchester prints 0.
Note:For the first bit in the array arr, assume its previous bit as 0.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
8
0 1 0 0 1 1 1 0
Output:
1 0 0 2 0 3 4 0
Explanation:
Here N = 8.
The given 8 integers are 0, 1, 0, 0, 1, 1, 1 and 0.
Initially, count = 0.
For the first bit 0, its previous bit is 0(assumption). Both are equal, so the count 1 is printed.
For the second bit 1, its previous bit is 0. Both are different, so 0 is printed.
For the third bit 0, its previous bit is 1. Both are different, so 0 is printed.
For the fourth bit 0, its previous bit is 0. Both are equal, so the count 2 is printed.
For the fifth bit 1, its previous bit is 0. Both are different, so 0 is printed.
For the sixth bit 1, its previous bit is 1. Both are equal, so the count 3 is printed.
For the seventh bit 1, its previous bit is 1. Both are equal, so the count 4 is printed.
For the eighth bit 0, its previous bit is 1. Both are different, so 0 is printed.

Example Input/Output 2:
Input:
7
0 1 0 1 0 1 0
Output:
1 0 0 0 0 0 0
void manchester(int SIZE, int arr[])
{
    bool result;
    int* res = (int*)malloc(sizeof(int)*SIZE);
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(i == 0)
        {
            result = (arr[i] == 0);
        }
        else
        {
            result = (arr[i] == arr[i-1]);
        }
        res[i] =(!result)?0:(++count);
    }
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", res[i]);
    }
}
