Function printReverse - CTS PATTERN
Author
letuscrack
Function printReverse: You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function printReverse(int n) accepts an integer n as the input. The function is supposed to print the reversed value of N.
Your task is to fill in the missing lines of code so that the program passes all test cases.
void printReverse(int n)
{
    
}
void printReverse(int n)
{
    while(n){
        printf("%d",n%10);
        n=n/10;
    }
    return;
}
