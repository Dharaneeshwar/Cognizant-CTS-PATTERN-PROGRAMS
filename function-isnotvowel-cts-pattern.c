Function isNotVowel - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all testcases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function isNotVowel(char ch) accepts a character ch as the input. The function is supposed to return 1 if the character ch is not a vowel. Else the function is supposed to return 0.
The function compiles fine but fails to return the desired result due to logical errors. 
Your task is to fix the program so that it passes all test cases.
Given Code:
int isNotVowel(char ch)
{
    ch = tolower(ch);
    return (ch != 'a' || ch != 'e' || ch != 'i' || ch != 'o' || ch != 'u');
}
Correct Code:
int isNotVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 0;
    }
    return 1;
}
