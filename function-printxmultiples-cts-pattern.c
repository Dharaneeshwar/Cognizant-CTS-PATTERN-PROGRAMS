Function printXMultiples - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing existing functions. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by reusing the existing functions.
The function printXMultiples(int M,  int N, int X) accepts three integers M, N and X as the input. The function is supposed to print the multiples of X from M to N.
You have to complete the code to make it work. Another function checkDivisibility(int M, int X) (where it returns 0 if M is divisible by X, else it returns 1) is available, which you are supposed to use inside the function printXMultiples to complete the code.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
3 10 2
Output:
4 6 8 10
Example Input/Output 2:
Input:
5 20 10
Output:
10 20
void printXMultiples(int M, int N, int X){
    for(int i=M;i<=N;i++){
        int d=checkDivisibility(i,X);
        if(d==0){
            printf("%d ",i);
        }
    }
}
