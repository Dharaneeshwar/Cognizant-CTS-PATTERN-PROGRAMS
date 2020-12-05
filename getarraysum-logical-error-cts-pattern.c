getarraysum Logical Error - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, the function compiles successfully but fails to return the desired result due to logical errors.
The function getArraySum(int *arr, int LENGTH) accepts an integer array and an integer LENGTH as the size of arr. It is supposed to return the sum of the elements present in the array arr.
You will have to edit and correct the code to make it work for all test cases.
int getArraySum(int *arr, int LENGTH){
    int sum = 0, i;
    for(i=0; i < LENGTH; i++){
        sum += arr[i];
    }
    return sum;
}
