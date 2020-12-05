Function printSequence – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method printSequence accepts three arguments - N, X and D, an integer representing the starting value of a sequence, an integer representing the number of terms to be printed in the sequence and an integer representing a value from 1 to 10.
The function/method printSequence is supposed to print the first X terms in the following sequence.
The sequence contains the integers from N to its next multiple of D repeatedly. If N itself divisible by D, then the sequence contains N repeatedly.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
3 7 5
Output:
3 4 5 3 4 5 3
Explanation:
Here N = 3, X = 7 and D = 5.
The sequence contains 7 integers from 3 to 5 repeatedly.
Hence the output is 
3 4 5 3 4 5 3
Example Input/Output 2:
Input:
2 8 10
Output:
2 3 4 5 6 7 8 9
Example Input/Output 3:
Input:
40 9 5
Output:
40 40 40 40 40 40 40 40 40
void printSequence(int N, int X, int D)
{
    int temp = N;
    for(int ctr = 1; ctr <= X; ctr++)
    {
        printf("%d ", N);
        N++;
        if((N - 1) % D == 0)
        {
            N = temp;
        }
    }
}
