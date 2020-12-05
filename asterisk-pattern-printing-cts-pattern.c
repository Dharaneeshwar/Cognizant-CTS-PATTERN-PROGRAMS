Asterisk Pattern Printing - CTS PATTERN
Author
letuscrack
Asterisk pattern printing: You are required to complete the given code by reusing existing functions. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the program.
The function printAsteriskPattern(int N) accepts an integer N as the input. The function is supposed to print the asterisk pattern as shown in the Example Input/Output section.
You have to complete the code to make it work as well. Another function printRow(int N)(where * is printed N times in a row followed by a newline character) is available, which you are supposed to use inside the function printAsteriskPattern to complete the code.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
5
Output:
*
**
***
****
*****
Example Input/Output 2:
Input:
7
Output:
*
**
***
****
*****
******
*******


void printAsteriskPattern(int N)
{
    
}
void printAsteriskPattern(int n)
{   
    for(int i=0;i<n;i++){
        printRow(i+1);
    }
}
