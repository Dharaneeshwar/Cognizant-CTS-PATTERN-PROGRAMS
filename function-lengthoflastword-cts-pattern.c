Function lengthOfLastWord - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function lengthOfLastWord(char *str, int len) accepts a string and lenghtlen as the input. The function returns the count of last word in a given string.
The function compiles successfully but fails to print the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
int lengthOfLastWord(char *str, int len){
    int count = 0;
    len--;
    while(len >= 0){
        if(str[len] == ' '){
            break;
        }
        len--;
        count++;
    }
    return count;
}
