Function printLCM - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing existing functions. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in given implementation. We do not expect you to modify the approach.
The function printLCM(int num1, int num2) accepts two integers num1 and num2 as the input. The function is supposed to print the LCM of two integers as the output.
You have to complete the code to make it work. Another function HCF(int num1, int num2) is available to return the HCF of two integers, which you are supposed to use inside the function printLCM to complete the code.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
2 3
Output:
6
Example Input/Output 2:
Input:
10 20
Output:
20
int printLCM(int num1, int num2)
{
    int h=HCF(num1,num2);
    printf("%d", (num1*num2)/h);
}
