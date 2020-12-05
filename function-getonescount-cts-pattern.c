Function getOnesCount - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function getOnesCount(int N) accepts an integer N as the input. The function is supposed to return the count of 1's in the binary representation of N.
The function compiles fine but fails to return the desired result due to logical error.
Your task is to fix the program so that it passes all test cases.
int getOnesCount(int N){
    int count=0;
    while(N>0){
        if(N%2==1){
            count+=1;
        }
        N/=2;
    }
    return count;
}
