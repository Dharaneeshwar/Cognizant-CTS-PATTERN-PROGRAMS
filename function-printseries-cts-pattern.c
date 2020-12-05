Function printSeries - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing existing functions. You can click on Run anytime to check the compilation/ execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in given implementation. We do not expect you to modify the approach.
The function printSeries(int S, int D, int T, char ch) accepts integer S as the starting term of series, integer D as the common difference for AP or common ratio for GP, integer T as the number of terms and a character ch as the series type to print. It is supposed to print the arithmetic progression if the character ch is 'A' and print the geometric progression if the character ch is 'G'.
The program must calculate both arithmetic progression and geometric progression.
However, an incomplete code in the function printSeries does not print the desired output for all the test cases.
You will have to complete the code to make it work so that the program passes all the test case.
void printSeries(int S, int D, int T, char ch)
{
    while(T > 0)
    {
        printf("%d ",S);
        if(ch == 'A')
        {
            S += D;
        }
        else if(ch == 'G')
        {
            S *= D;
        }
        T--;
    }
}
