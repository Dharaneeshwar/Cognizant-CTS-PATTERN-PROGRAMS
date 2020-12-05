Function toggleBits - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function toggleBits(int N, int A, int B) accepts three integers N, A and B as the input. The function is supposed to return N after toggling the bits from A to B.
Note: The rightmost bit is assumed to be the 1st bit and so the range A to B is calculated in reverse order.
The function compiles successfully but fails to print the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
int toggleBits(int N, int A, int b){
    int n=((1<< B)-1) ^((1<<(A-1))-1);
    return N^n;
}
