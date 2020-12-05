Function consecutiveChar - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need is correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function consecutiveChar(char *str) accepts a character array str. It is supposed to the return a new string with the first occurring longest substring consisting of same alphabet in str.
The function doesn't work for all test cases.
Your task is to debug the program to pass all the test cases.
char *consecutiveChar(char *str)
{
    int index = 0, count = 1, startIndex, maxCount = 0;
    while (str[index])
    {
        if (str[index] != str[index + 1])
        {
            if (count >= maxCount)
            {
                startIndex = index - count + 1;
                maxCount = count;
            }
            count = 1;
        }
        else
        {
            count++;
        }

        index++;
    }
    str[startIndex + maxCount] = '\0';
    return &str[startIndex];
}
