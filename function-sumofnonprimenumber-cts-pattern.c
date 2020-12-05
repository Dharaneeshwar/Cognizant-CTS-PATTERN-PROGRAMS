Function sumOfNonPrimeNumber - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function sumOfNonPrimeNumber(int arr[], int N) accepts an integer array of size N as the input. The function is supposed to return the sum of non-prime numbers.
Another function isPrime(int num) is available to return 0 if the given number is not prime else it returns 1, which you are supposed to use inside the function sumOfNonPrimeNumber(int arr[], int N) to complete the code.
The function compiles fine but fails to print the desired results for some test cases. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output 1:
Input:
5
2 3 4 5 6
Output:
10
int sumOfNonPrimeNumber(int arr[], int N)
{
    int index, sum = 0;
    for(index = 0; index < N; index++)
    {
        if(!isPrime(arr[index]))
        {
            sum += arr[index];
        }
    }
    return sum;
}
