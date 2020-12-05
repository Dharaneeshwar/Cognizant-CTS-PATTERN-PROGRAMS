Function tenthDigitProduct - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the program.
The function tenthDigitProduct(int arr[], int N) accepts an array of size N as the input. It is supposed to return the product of tenth digit of all the elements in the array.
Your task is to fill in the missing lines of code so that the program passes all test cases.
int tenthDigitProduct(int arr[],int N){
    int h=1;
    for(int i=0;i<N;i++){
        h*=(arr[i]%100/10);
    }
    return h;
}
