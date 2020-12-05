Function numberTrianglePattern - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to implement the logic for the program.
The function numberTrianglePattern(int N) accepts an integer N as the input. The function is supposed to print the pattern as shown in the Example Input/Output Sections.
Your task is to fill in the missing lines of code so that the program passes all test cases.
Example Input/Output 1:
Input:
4
Output:
      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 
Example Input/Output 2:
Input:
5
Output:
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5
void numberTrianglePattern(int N)
{
  int dup;
  for(int i=1;i<=N;i++)
  {
    dup=i; 
    for(int j=1;j<=i;j++)
    {
      printf("%d ",dup); 
      dup+=1; 
    } 
    dup-=2;
    for(int j=dup;j>=i;j--)
    {
      printf("%d ",j); 
    }  
    printf("\n"); 
  }
}
