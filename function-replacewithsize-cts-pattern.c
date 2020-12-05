Function replaceWithSize – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method replaceWithSize accepts two arguments - SIZE and arr, an integer representing the size  of the array arr and the integer array.
The function/method replaceWithSize is supposed to modify the array based on the following conditions.
- If the SIZE is odd, then function/method must replace all the odd integers in the array with the SIZE.
- If the SIZE is even, then function/method must replace all the even integers in the array with the SIZE.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
6 3 2 8 7 4
Output:
6 3 6 6 7 6
Explanation:
The given 6 integers are 6, 3, 2, 8, 7 and 4.
Here the size is 6. So the even integers are replaced with the size 6.
Hence the output is
6 3 6 6 7 6
Example Input/Output 2:
Input:
9
-23 50 -27 34 33 -92 31 -77 71
Output:
9 50 9 34 9 -92 9 9 9
void replaceWithSize(int SIZE, int arr[])
{
    for(int index = 0; index < SIZE; index++)
    {
        if(SIZE%2==0){
            if(arr[index] % 2 == 0)
            arr[index] = SIZE;
        }
        else{
            if(arr[index]%2!=0)arr[index]=SIZE;
        }
    }
}
