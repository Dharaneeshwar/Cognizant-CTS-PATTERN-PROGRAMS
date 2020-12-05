Odd or Even - CTS PATTERN
Author
letuscrack
Odd or Even: You are required to fix all logical errors in the given code. You can click on run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function oddOrEven(int num) accepts an integer num as the input. The function prints "Even" if num is an even number. Else the function prints "Odd".
The function compiles fine but fails to return the desired results for some test cases. 
Your task is to fix the program so that it passes all test cases.
void oddOrEven(int num){
    if(num%2 !=0){
        printf("Odd");
    }
    else{
        printf("Even");
    }
}
