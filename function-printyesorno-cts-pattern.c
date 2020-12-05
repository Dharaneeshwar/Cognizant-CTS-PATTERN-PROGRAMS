Function printYesOrNo - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the program.
The function printYesOrNo(char ch) accepts a character ch as the input. The function is supposed to print "Yes" if the value of ch is 'Y' or 'y'. Else print "No" if the value of ch is 'N' or 'n'. Else the function printYesOrNo() prints "Invalid". 
Your task is to fill in the missing lines of code so that the program passes all test cases.
Given Code:
void printYesOrNo(char ch)
{
  
}
Correct Code:
void printYesOrNo(char ch)
{
    if(ch=='y' || ch=='Y')
    printf("Yes");
    else if (ch=='n' || ch=='N')
    printf("No");
    else
    printf("Invalid");
  
}
