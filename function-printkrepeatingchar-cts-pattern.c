Function printKrepeatingChar - CTS PATTERN
Author
letuscrack
You are required to complete the given function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the function.
The function printKrepeatingChar(char *str, int K) accepts a string str and an integer K as the input. The function is supposed to print the character(s) which are consecutively repeating at least K times in the string str.
Your task is to fill in the missing lines of code so that the program passes all test cases.
void printKrepeatingChar(char *str, int K){
    int c,ele=0,foo;
    while(ele<strlen(str)){
        foo=ele+1;
        c=1;
        while(foo<strlen(str)){
            if(str[ele]==str[foo]){
                c+=1;
            }
            else{
                break;
            }
            foo+=1;
        if(c>=K){
            printf("%c",str[ele]);
        }
        ele+=c;
        }
    }
}
