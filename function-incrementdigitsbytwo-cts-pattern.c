Function incrementDigitsByTwo - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function incrementDigitsByTwo(int N) accepts an integer N as the input. It is supposed to print the integer N by incrementing all the digits of N by 2. When each digit is incremented by 2 the unit digit of the incremented value must be printed.
The function compiles fine but fails to print the desired results.
Your task is to fix the program so that it passes all test cases.
void incrementDigitsByTwo(int N)
{
    int digits[20], index=0;
    while(N>0)
    {
        digits[index++] = N%10;
        N /= 10;
    }
    while(index--)
    {
        printf("%d", (digits[index]+2)%10);
    }
}
