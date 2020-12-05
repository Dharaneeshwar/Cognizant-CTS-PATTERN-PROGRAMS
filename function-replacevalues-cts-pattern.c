Function replaceValues – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method replaceValues accepts two arguments - SIZE and arr,an integer representing the size of the array arr and the integer array arr.
The function/method replaceValues must replace the integers in the array based on the given conditions.
- If the size of the array is odd, then each integer in the array must be replaced with 1. Else each integer in the array must be replaced with 0.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
5
13 16 10 12 17
Output:
1 1 1 1 1 
Explanation:
The size of the given array is 5 which is odd.
So the integers in the array are replaced by 1s.
Hence the output is 
1 1 1 1 1
Example Input/Output 2:
Input:
4
8 9 5 2
Output:
0 0 0 0
void replaceValues(int SIZE, int arr[])
{
    int i=0;
    while(i<SIZE){
        if(SIZE%2==0){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
        i+=1;
    }
}
