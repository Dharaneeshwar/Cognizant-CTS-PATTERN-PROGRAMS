Function printCornerElements - CTS PATTERN
Author
letuscrack
You are required to fix the logical error in the given code. You can click on Run button anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all the test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function printCornerElements(int N, int mat[N][N]) accepts an integer matrix mat of size NxN as the input. The function is supposed to print the corner elements.
The function compiles fine but fails to print the desired result due to logical error. 
Your task is to fix the program so that it passes all test cases.
Example Input/Output:
Input:
3
1 2 3
4 5 6
7 8 9
Output:
1 3 7 9
void printCornerElements(int N, int mat[N][N])
{
    printf("%d %d %d %d",mat[0][0],mat[0][N-1],mat[N-1][0],mat[N-1][N-1]);
}
