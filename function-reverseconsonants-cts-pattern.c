Function reverseConsonants - CTS PATTERN
Author
letuscrack
Function reverseConsonants - CTS PATTERN: You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function reverseConsonants(char *str, int len) accepts a string str and it's length len as the input. The function is supposed to print the consonants in the string in reverse order.
The function compiles successfully but fails to print the desired result due to logical error.
Your task is to debug the program to pass all the test cases.
void reverseConsonants(char *str, int len)
{
    if(len >= 0)
    {
        if(str[len] != 'a' && str[len] != 'e' && str[len] != 'i' && str[len] != 'o' && str[len] != 'u')
        {
            printf("%c", str[len]);
        }
        reverseConsonants(str, len);
    }
}
void reverseConsonants(char *str, int len)
{
    len--;
    if(len >= 0)
    {
        if(str[len] != 'a' && str[len] != 'e' && str[len] != 'i' && str[len] != 'o' && str[len] != 'u')
        {
            printf("%c", str[len]);
        }
        reverseConsonants(str, len);
    }
}
