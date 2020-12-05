Function sumOfUnitDigits - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function sumOfUnitDigits(int array[], int N) accepts an integer array of size N as the input. The function is supposed to return the sum of unit digit of the elements in the array.
The function compiles fine but fails to return the desired result. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output:
Input:
5
12 23 34 45 61
Output:
15
int sumOfUnitDigits(int array[], int N)
{
    int index, sum=0;
    for(index = 0; index < N; index++)
    {
        sum += array[index]%10;
    }
    return sum;
}
