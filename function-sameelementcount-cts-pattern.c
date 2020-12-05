Function sameElementCount - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required. 
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods. 
The function sameElementCount(int *arr, int len) accepts an integer array arr of length len as input and returns the number of elements in arr which are even numbers and are equal to the element to its right.
Note: In an array element at index i is considered to be on the left of index i+1 and to the right of index i-1. The last element in arr does not have any element next to it which makes it incapable to satisfy the second condition and hence should not be counted.
The function compiles fine but fails to return the desired results for some test cases.
Your task is to fix the program so that it passes all test cases.
int sameElementCount(int *arr, int len)
{
    int i, count =0;
    for(i=0;i<len;i++)
    {
        if(arr[i]%2==0){
            if(arr[i]==arr[i+1])count++;
        }
    }
    return count;
}
