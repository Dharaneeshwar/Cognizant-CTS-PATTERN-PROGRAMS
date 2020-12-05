Function printColor - CTS Pattern
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method printColor prints a string representing the name of a color according to the given input number.
For example if the values of the given number are 1,2,3,4, the function prints Red, Yellow, Blue, Green respectively. For any other values of the given number, it should print "No Color"
The function/method printColor accepts an argument num, an integer representing the input number.
The function compiles successfully but fails to return the desired result for some test cases due to incorrect implementation of the function.
Your task is to fix the code so that it passes all the test cases.
void printColor(int num)
{
    switch(num)
    {
    case 1:
        printf("Red");
        break;
    case 2:
        printf("Yellow");
        break;
    case 3:
        printf("Blue");
        break;
    case 4:
        printf("Green");
        break;
    default:
        printf("No Color");
        break;
    }
}
