Function getPower - CTS PATTERN
Author
letuscrack

You are required to complete the given code by reusing existing functions. You can click on Run anytime to check the compilation/ execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in given implementation. We do not expect you to modify the approach.
The function double getPower(int X, int Y) accepts two integers X and Y as arguments. It is supposed to calculate and return the value of X^Y (X power Y).
However, an incomplete code in the function getPower works only for the positive value of Y.
Another function int pow(int X, int Y) is available as a helper function to use in the code.
You will have to complete the code to make it work for the negative value of Y as well. Another function int pow(int X, int Y) is available to use inside the function getPower to complete the code.
int pow(int, int);
double getPower(int X, int Y)
{
    if(Y >= 0)
    {
        return pow(X, Y);
    }
    else
    {
        return 1.0/pow(X,abs(Y));
        
    }
}
