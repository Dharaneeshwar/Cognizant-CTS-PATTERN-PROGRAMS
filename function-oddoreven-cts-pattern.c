Function oddOrEven - CTS PATTERN
Author
letuscrack
Function oddOrEven: You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function oddOrEven(int num) accepts an integer num as the input. The function is supposed to return the string "Odd" if num is an odd integer. Else the function is supposed to return the string "Even".
The function compiles fine but fails to return the desired result due to logical error.
Your task is to fix the program so that it passes all test cases.
char *oddOrEven(int num)
{
    return((num & 1) == 1 ? "Even" : "Odd");
}
char *oddOrEven(int num)
{
    return((num & 1) == 1 ? "Odd" : "Even");
}
