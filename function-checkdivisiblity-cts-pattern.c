Function checkDivisiblity - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function checkDivisiblity(int A, int B) accepts two integers A and B as the input. The function is supposed to return the quotient if A is divisible by B. Else the function is supposed to return 0.
The function compiles fine but fails to return the desired result for some test cases. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output 1:
Input:
24 6
Output:
4
Example Input/Output 2
Input:
10 0
Output:
No
int checkDivisiblity(int A, int B)
{
    if(B==0)
    return 0;
    if(A%B == 0)
    {
        return A/B;
    }
    return 0;
}
