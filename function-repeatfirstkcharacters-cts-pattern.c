Function repeatFirstKCharacters – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method repeatFirstKCharacters accepts two arguments - str and K, a character array representing a string str and an integer K.
The function/method repeatFirstKCharacters is supposed to form a new string of length L (where L is the length of str) by concatenating the first K characters of str repeatedly. Then the function returns the new string.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
PineApple
4
Output:
PinePineP
Explanation:
The given string is PineApple and its length is 9.
K = 4
The first 4 characters in the string PineApple are P, i, n and e. So the first 4 characters are concatenated repeatedly until its length reaches 9.
Hence the output is PinePineP.
Example Input/Output 2:
Input:
bookShop
3
Output:
booboobo
char* repeatFirstKCharacters(char *str, int K)
{
    int len = strlen(str);
    char *repStr;
    repStr=(char *)malloc(sizeof(char)*len);
    for(int index = 0; index < len; index++)
    {
        repStr[index] = str[index % K];
    }
    return repStr;
}
