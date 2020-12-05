Array Reversal - CTS PATTERN
Author
letuscrack
Array Reversal - CTS PATTERN: Code Approach: For this question, you will need to implement the logic for the program.
The function void reverseArray(int *arr, int len) accepts an array arr and array length len as input. The function reverses the elements in the array in place.
Your task is to fill in the missing lines of code so that the program passes all test cases.


void reverseArray(int *arr, int len){
    int start=0,end=len-1;
    while(start<end){
        int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        start++;end--;
    }
}
