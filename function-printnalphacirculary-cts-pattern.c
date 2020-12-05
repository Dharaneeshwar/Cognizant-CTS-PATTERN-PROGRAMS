Function printNalphaCirculary - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the function.
The function printNalphaCirculary(char *str, int N) accepts a string str and an integer N as the input. The function is supposed to traverse and print N alphabets in the string circularly.
Your task is to fill in the missing lines of code so that the program passes all test cases.
void printNalphaCirculary(char *str, int N)
{
    int a=strlen(str);
    int b=a;
    printf("%s",str);
    int i=0;
    while(a<N)
    {
        if(i>=b)
        {
            i=0;
        }
        printf("%c",str[i]);
        a+=1;
        i+=1;
    }
}
