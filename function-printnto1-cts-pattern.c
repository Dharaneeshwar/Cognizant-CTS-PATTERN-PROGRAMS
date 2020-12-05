Function printNto1 - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printNto1(int num) accepts an integer num as the input. It is supposed to print the numbers from N to 1.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Given Code:
void printNto1(int num)
{
    
}
Correct Code:
void printNto1(int num)
{
    if(num>=1){
        printf("%d ",num);
        printNto1(num-1);
    }
    
}
