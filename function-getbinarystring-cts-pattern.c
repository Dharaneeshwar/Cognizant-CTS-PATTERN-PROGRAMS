Function getBinaryString - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method getBinaryString accepts an argument - N representing an integer N.
The function/method getBinaryString is supposed to form a string of length N by concatenating the 0s and 1s alternatively. Then the function/method must return the string.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
10
Output:
0101010101
Explanation:
Here N=10, so the length of the binary string is 10.
After concatenating 0s and 1s alternatively of length 10, the string becomes 0101010101.
Hence the output is 0101010101.
Example Input/Output 2:
Input:
7
Output:
0101010
char* getBinaryString(int N)
{
    char* str=malloc(sizeof(char)*N);
    for(int index = 0; index < N; index++)
    {
        str[index] = (index % 2)+'0';
    }
    str[N] = '\0';
    return str;
}
