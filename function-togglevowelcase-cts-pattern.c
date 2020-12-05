Function toggleVowelCase - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function toggleVowelCase(char str[]) accepts a string str as the input. The function is supposed to print the toggle case of all the vowels in str.
The function compiles fine but fails to print the desired results due to logical errors. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output 1:
Input:
thAnkyou
Output:
thankyOU
void toggleVowelCase(char str[]){
    for(int index=0;str[index]!='\0';index++){
        if(isVowel(str[index])){
            printf("%c",toggle(str[index]));
        }
        else{
            printf("%c",str[index]);
        }
    }
}
