Function isPalindrome - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function isPalindrome(char *str) accepts a string str as the input. The function is supposed to print "YES" if the string is palindrome. Else the function is supposed to print "NO".
The function compiles successfully but fails to print the desired result due to logical error.
Your task is to debug the program to pass all the test cases.
void isPalindrome(char *str){
    int len = strlen(str);
    for(int index = 0; index < len/2; index++){
        if(str[index] != str[len-index-1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
