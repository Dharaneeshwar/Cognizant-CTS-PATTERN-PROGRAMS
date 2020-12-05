Function reverse - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/ execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function reverse(char *) accepts a string. It is supposed to reverse the string in place.

The function swap(char *, char *) is also available as a helper function to use.
You will have to complete the code to make it work for all test cases.
void reverse(char *str){
    int s=0,e=strlen(str)-1;
    while(s<e){
        char t=str[s];
        str[s]=str[e];
        str[e]=t;
        s+=1;e-=1;
    }
}
