Function isEqualFirstHalf – CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
The function/method isEqualFirstHalf accepts two arguments - str1 and str2, representing two string values.
The function/method isEqualFirstHalf must return 1 if the first half of str1 is equal to the first half of str2. Else it must return 0.
Note: The length of str1 and str2 are always the same. If the length is odd, then consider the middle character to be part of the first half.
Your task is to implement the function isEqualFirstHalf so that it passes all the test cases.
Example Input/Output 1:
Input:
Accuracy
Accurate
Output:
1
Explanation:
Here str1 = Accuracy and str2 = Accurate.
The first half of str1 is Accu.
The first half of str2 is Accu.
Here first half of str1 is equal to the first half of str2.
So 1 is printed as the output.
Example Input/Output 2:
Input:
computer
conclude
Output:
0
Example Input/Output 3:
Input:
Transport
Transform
Output:
1
int isEqualFirstHalf(char *str1, char *str2)
{
    int limit= (strlen(str1)+1) /2;
    for(int i=0;i<limit;++i)if(str1[i]!=str2[i])return 0;
    return 1;
}
