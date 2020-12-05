Function printCharInOddPlace - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function printCharInOddPlace(int charCount[]) accepts an integer array (where index 'a' or 97 contains the count of alphabet 'a') which holds the character count of the characters in the given string as the input. The function is supposed to print the characters from the string which are at odd positions in alphabets ( i.e. a, c, e, g, i and so on).
The function compiles fine but fails to print the desired results. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output 1:
Input:
apple
Output:
a e
Explanation:
The alphabetic position of a is 1, e is 5, l is 12 and p is 16.
The characters at odd positions are a and e.
Hence a and e are printed.
void printCharInOddPlace(int charCount[]){
    int index;
    for(index=97;index<=122;index+=2){
        if(charCount[index]!=0)
        printf("%c ",index);
    }
}
