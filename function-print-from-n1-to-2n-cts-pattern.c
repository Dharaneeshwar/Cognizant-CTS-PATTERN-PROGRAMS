Function Print from N+1 to 2N - CTS PATTERN
Author
letuscrack
Function Print from N+1 to 2N: You are required to fix all logical errors in the given code. You can click on run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function printNto2N(int N) accepts an integer N as the input. The function prints from N+1 to 2N.
The function looks fine but gives a compilation error.
Your task is to fix the program so that it passes all test cases.
void printNto2N(int N){
    int ctr= N + 1;
    while(ctr <= 2*N){
        printf("%d ",ctr);
        ctr++;
    }
}
