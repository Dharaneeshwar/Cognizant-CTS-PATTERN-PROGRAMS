Function sameOddElementCount – CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
The function sameElementCount accepts two arguments - SIZE and arr, an integer representing the size of the array arr and the integer array arr.
The function sameElementCount must return an integer representing the number of elements in arr which are odd numbers and are equal to the element to its right.
Your task is to implement the function sameElementCount so that it passes all the test cases.
Example Input/Output 1:
Input:
8
10 10 25 25 41 35 35 35
Output:
3
Explanation:
The integer 25 is odd and the integer to its right is 25, so the count becomes 1.
The integer 25 is odd and the integer to its right is 41 which is not equal to 25, so the count remains the same.
The integer 41 is odd and the integer to its right is 35 which is not equal to 41, so the count remains the same.
The integer 35 is odd and the integer to its right is 35, so the count becomes 2.
The integer 35 is odd and the integer to its right is 35, so the count becomes 3.
Hence the output is 3.
Example Input/Output 2:
Input:
7
20 69 53 71 45 31 12
Output:
0
int sameOddElementCount(int SIZE, int *arr)
{
    int c=0;
    for(int index=0;index<SIZE-1;index++){
        if(arr[index]%2!=0){
            if (arr[index]==arr[index+1]){
                c+=1;
            }
        }
    }
    return c;

}
