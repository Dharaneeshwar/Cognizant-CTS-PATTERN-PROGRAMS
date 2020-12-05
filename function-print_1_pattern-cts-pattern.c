Function print_1_Pattern - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the program.
The function print_1_Pattern(int N) accepts an integer N as the input. It is supposed to print the pattern as shown in Example Input/Output sections.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
3
Output:
1 
1 1 
1 1 1 
Example Input/Output 2:
Input:
6
Output:
1 
1 1 
1 1 1 
1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 1 
void print_1_Pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            printf("1 ");
        }
        printf("\n");
    }
}
