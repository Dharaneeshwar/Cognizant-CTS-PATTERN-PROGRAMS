Function countOfUpperLower - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function countOfUpperLower(char *str) accepts a string str as the input. It is supposed to print the count of uppercase alphabets and lowercase alphabets in the string separated by a space.
The function compiles fine but fails to print the desired result.
Your task is to fix the program so that it passes all test cases.
void countOfUpperLower(char *str)
{
    int index , len = strlen(str), uppercaseCount=0,lowercaseCount=0;
    while(index<len)
    {
        if(isupper(str[index]))
        {
            uppercaseCount++;
        }
        else if(islower(str[index]))
        {
            lowercaseCount++;
        }
        index++;
    }
    printf("%d %d", uppercaseCount, lowercaseCount);

}
