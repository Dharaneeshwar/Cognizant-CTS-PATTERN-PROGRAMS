Function root - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need is correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function root(int val, int square) accepts an integer val and an integer square. It is supposed to return the square root of val if square is 1. Else it must return the cube root of val.
The function works only for returning square root. Modify the function so that it runs for returning cube root as well.
Your task is to debug the program to pass all the test cases.
double root(int val, int square)
{
    double res = -1;
    if(square == 1)
    {
        res = pow(val, 1/2.0);
    }
    else
    {
        res=pow(val,1/3.0);
    }
    return res;
}
