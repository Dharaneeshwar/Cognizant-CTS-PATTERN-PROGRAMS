Function printRightTriangle - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the program.
The function printRightTriangle(int N) accepts an integer N as the input. It is supposed to print the pattern as shown in Example Input/Output section.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
5
Output:
****1
***21
**321
*4321
54321
void printRightTriangle(int N){
    int temp=N-1;
    for(int ele=1;ele<=N;ele++){
        for(int foo=0;foo<temp;foo++){
            printf("*");
        }
        for(int foo=ele;foo>0;foo++){
            printf("%d",foo);
        }
        printf("\n");
        temp-=1;
    }
}
