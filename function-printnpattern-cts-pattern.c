Function printNPattern - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the program.
The function printNPattern( int N) accepts an integer N as the input. The function is supposed to print the pattern as shown in Example Input/Output sections.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
5
Output:
5 5 5 5 5
5 5 5 5
5 5 5
5 5
5
Example Input/Output 2:
Input:
4
Output:
4 4 4 4
4 4 4
4 4
4
void printNPattern(int N){
    for(int i=0;i<=N-1;i++){
        for(int j=0;j<N-i-1;j++){
            printf("%d ",N);
        }
        printf("%d\n",N);
    }
}
