Function checkBirthday - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
Lisa always forgets her birthday which is on 5th July. In order to help her, we have function checkBirthday(char *month, int day) which takes month and day as input and returns 1 if it's her birthday and returns 0 otherwise.
The function compiles fine but fails to return desired results for some cases.
Your task to fix the code so but that it passes all test cases.
int checkBirthday(char* month,int day)
{
    int i=0;
    if(day==5){
        while(*(month+i)!='\0'){
            if(*(month+i)=='y'){
                return 1;
            }
            i++;
        }
    }
    else
        return 0;
}
