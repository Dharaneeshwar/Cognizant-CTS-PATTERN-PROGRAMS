Print Only Consonants - CTS PATTERN
Author
letuscrack
Print Only Consonants: You are required to fix all logical errors in the given code. You can click on run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function int isVowel(char ch) accepts a character as input. The function returns 1 if ch is a vowel. The function returns 0 if ch is not a vowel.
The function compiles fine but fails to return the desired results for some test cases. 
Your task is to fix the program so that it passes all test cases.
int isVowel(char ch){
    ch=tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u';
}
