Function decimalToBinary - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function decimalToBinary(int N) accepts an integer N as the input. The function is supposed to print the binary representation of N.
The function compiles successfully but fails to print the desired result due to logical error. Your task is to debug the program to pass all the test cases.
void decimalToBinary(int N){
    if(N>0){
        decimalToBinary(N/2);
        printf("%d",N%2);
    }
    return 0;
}
