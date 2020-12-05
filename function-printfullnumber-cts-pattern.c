Function printFullNumber - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the function.
The function printFullNumber(int number, int unitDigit, int tenthDigit) accepts three integers representing number (where tenth digit is missing), unitDigit and tenthDigit as the input. The function is supposed to print the original number.
Your task is to fill in the missing lines of code so that the program passes all test cases.
void printFullNumber(int number, int unitDigit, int tenthDigit)
{
    int f=number/10;
    f=f*10+tenthDigit;
    f=f*10+unitDigit;
    printf("%d",f);

}
