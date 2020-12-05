Function checkEvenMonthFirstFiveDays – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method checkEvenMonthFirstFiveDays accepts two arguments - month and day,  a character array representing a month and an integer representing the day of the month.
The function/method checkEvenMonthFirstFiveDays is supposed to return 1 if the given month is equal to the one of the even months (Feb, Apr, Jun, Aug, Oct and Dec) and the given day is equal to the one of the first five days of the month. Else the function must return 0.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
Feb 3
Output:
1
Explanation:
The month Feb is the one of the even months and the day 3 is one of the first five days of the month. So 1 is printed as the output.
Example Input/Output 2:
Input:
Jan 4
Output:
0
int checkEvenMonthFirstFiveDays(char *month, int day)
{
    char evenMonths[][4] = {"Feb", "Apr", "Jun", "Aug", "Oct", "Dec"};
    for(int index = 0; index < 6; index++)
    {
        if(strcmp(month, evenMonths[index])==0)
        {
            if(day<=5){
                return 1;
            }
        }
    }
    return 0;
}
