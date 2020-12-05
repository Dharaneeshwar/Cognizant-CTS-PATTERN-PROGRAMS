Function getOddLengthIntegers – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method getOddLengthIntegers accepts three arguments - SIZE, arr and countPtr, an integer representing the size of the array, the integer array arr and a pointer to an integer countPtr.
The function/method getOddLengthIntegers is supposed to return an array of integers containing the integers having odd number of digits among the integers in the array arr and assign its count to the countPtr's value. If there is no such integer in the array arr, then the function must return an array of size 1 with the value -1 and assign 1 to the countPtr's value.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
325 7 89045 2345 19 890 766
Output:
325 7 89045 890
Explanation:
The integers having the odd number of digits among the 6 integers are 325, 7, 89045 and 890.
Hence the output is
325 7 89045 890
Example Input/Output 2:
Input:
7
3451 23 8900 567890 56 7910 21
Output:
-1
int* getOddLengthIntegers(int SIZE, int *arr, int *countPtr)
{
    int *oddLenIntArr;
    oddLenIntArr=(int *)malloc(sizeof(int)*SIZE);
    int count = 0, flag = 0, curr, j=0;
    for(int i=0;i<SIZE;i++){
        count=0;
    curr=arr[i];
    while(curr>0){
        count++;
        curr/=10;
    }
    if(count%2!=0){
        oddLenIntArr[j++]=arr[i];
        flag=1;
    }
    }
    for(int i=0;i<j;i++)printf("%d ",oddLenIntArr[i]);
    if(flag==0){
        oddLenIntArr[0]=-1;
        *countPtr=1;
        return oddLenIntArr;
    }
    return oddLenIntArr;
}
