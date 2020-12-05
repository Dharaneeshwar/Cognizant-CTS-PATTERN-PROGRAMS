Function printDigitSum - CTS PATTERN
Author
letuscrack
You are required to complete the given code by implementing the logic for the function. You can click on Run anytime to check the compilation/ execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to implement the logic for the function.
The function printDigitSum(int *arr, int LENGTH) accepts an array arr and an integer LENGTH as the size of arr. It is supposed to print the sum of digits of each integer in the array separated by a comma.
You will have to complete the code to make it work and pass all test cases.
void printDigitSum(int *arr, int LENGTH)
{
    int s=0;
    for(int i=0;i<LENGTH;i++){
        s=0;
        while(arr[i]>0){
            int r=arr[i]%10;
            s+=r;
            arr[i]/=10;
        }
        if(i<LENGTH-1){
            printf("%d,",s);
        }
        else{
            printf("%d",s);
        }
    }
    
}
