Factor Count - CTS PATTERN
Author
letuscrack
Factor Count: Code Approach: For this question, you will need to implement the logic for the program.
The function int getFactorCount(int num) accepts a number as input. The function returns the factor count of num.
Your task is to fill in the missing lines of code so that the program passes all test cases.
int getFactorCount(int num){
    int count=0,i=1;
    while(i<=num){
        if(num%i==0){
            count++;
        }
        i+++;
    }
    return count;
}
