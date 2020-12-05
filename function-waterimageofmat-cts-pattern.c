Function waterImageOfMat - CTS PATTERN
Author
letuscrack
You are required to complete the given function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the program.
The function waterImageOfMat(int R, int C, int matrix[R][C]) accepts an integer matrix of size RxC as the input. The function is supposed to print the water image of the matrix.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
3 3
1 22 5
6 8 7
9 1 2
Output:
9 1 2
6 8 7
1 22 5
Example Input/Output 2:
Input:
4 5
1 2 3 4 5
9 8 7 6 0
12 8 41 23 1
89 21 3 5 77
Output:
89 21 3 5 77 
12 8 41 23 1 
9 8 7 6 0 
1 2 3 4 5 
void waterImageOfMat(int R, int C, int matrix[R][C]){
    for(int ele=R-1;ele>=0;ele--;){
        for(int foo=0;foo<C;foo++){
            printf("%d ",matrix[ele][foo]);
        }
        printf("\n");
    }
}
