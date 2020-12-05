Function firstRepeatCharacter - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function firstRepeatCharacter(char *str, int index) accepts a string and index as the input. The function prints the first repeating character in the given string.
The function compiles successfully but fails to print the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
void firstRepeatCharacter(char *str, int index){
    int characterCount[128] = {0};
    for(index=0;index<strlen(str);index++){
        if(characterCount[str[index]] == 1){
            printf("%c", str[index]);
            break;
        }
        characterCount[str[index]]++;
}
