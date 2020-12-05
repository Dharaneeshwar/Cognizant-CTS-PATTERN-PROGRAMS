Function printPattern - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the function.
The function printPattern(int R, int C) accepts two integers R and C as the input. The function is supposed to print the pattern as shown in the Example Input/Output sections.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
5 6
Output:
5 5 5 5 5 5
5 5 5 5 1 5
5 5 5 5 2 5
5 5 5 5 3 5
5 5 5 5 5 5
Example Input/Output 2:
Input:
10 10
Output:
10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 1 10
10 10 10 10 10 10 10 10 2 10
10 10 10 10 10 10 10 10 3 10
10 10 10 10 10 10 10 10 4 10
10 10 10 10 10 10 10 10 5 10
10 10 10 10 10 10 10 10 6 10
10 10 10 10 10 10 10 10 7 10
10 10 10 10 10 10 10 10 8 10
10 10 10 10 10 10 10 10 10 10
void printPattern(int R, int C)
{
    int s=1;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(i!=0 && i!=R-1){
                if(j==C-2){
                    printf("%d ",s);
                    s+=1
                }
                else{
                    printf("%d ",R);
                }
            }
            else{
                printf("%d ",R);
            }
        }
        printf("\n");
    }
    
}
