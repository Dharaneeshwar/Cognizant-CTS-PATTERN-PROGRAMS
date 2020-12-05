Function newyork - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function newyork(char *str) accepts a string as the input. It is supposed to return a new string from str by replacing all the vowels by '*'.
You will have to complete the code to make it work for all test cases.
char* newyork(char *str)
{
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        str[i]='*';
    }
    return str;
    
}
