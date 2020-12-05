Function samePositionBitCount - CTS PATTERN
Author
letuscrack
You are required to fix all logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function samePositionBitCount(int N1, int N2) accepts two integers N1 and N2 as the input. The function is supposed to return the count of bits which are equal in both the integers at the same positions.
The function compiles fine but fails to return the desired result due to logical errors.
Your task is to fix the program so that it passes all test cases.
int samePositionBitCount(int N1, int N2){
    int count=0;
    while(N1>0 || N2>0){
        if(N1%2==N2%2){
            count+=1;
        }
        N1/=2;
        N2/=2;
    }
    return count;
}
