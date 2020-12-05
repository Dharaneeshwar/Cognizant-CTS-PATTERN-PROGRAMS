Function getRangeNumVal - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function int getRangeVal(int N) accepts an integer N and it is supposed to return the range value. If N is between 1 and 5 then the range value is 1, if N is between 6 and 10 then the range value is 2. For all other values the range value is -1.
The function looks fine but gives a compilation error.
Your task is to fix the program so that it passes all test cases.
int getRangeVal(int N)
{
    switch(N)
    {
    case 1 ...  5:
        return 1;
        break;
    case 6 ... 10:
        return 2;
        break;
    default:
        return -1;
        break;
    }
}
