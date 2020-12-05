Function flipCount - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function flipCount(int a, int b) accepts two integers a and b as the input. The function returns the flipcount that is the number of bits to be changed in integer a to become integer b.
The function compiles successfully but fails to print the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
int flipCount(int a, int b){
    int bits = a^b;
    int c=0;
    while(bits>0){
        c+=(bits &1);
        bits/=2;
    }
    return count;
}
