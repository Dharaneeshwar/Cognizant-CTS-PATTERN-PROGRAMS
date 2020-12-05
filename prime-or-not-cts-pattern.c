Function Prime or Not - CTS PATTERN
Author
letuscrack
Function Prime or Not - CTS PATTERN: You are required to fix all logical errors in the given code. You can click on run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function isPrime(int N) accepts an integer N as the input. The function returns 1 if N is a prime number. The function returns 0 if N is not a prime number.
The function compiles fine but fails to return the desired results for some test cases. 
Your task is to fix the program so that it passes all test cases.
int isPrime(int N){
    int divisor;
    if(N <= 1)
    return 0;
    int sqrtN = sqrt(N);
    for(divisor = 2; divisor <= sqrtN; divisor++){
        if(N % divisor == 0){
            return 0;
        }
    }
    return 1;
}
