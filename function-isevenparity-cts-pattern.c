Function isEvenParity – CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
The function/method isEvenParity accepts an argument - num representing an integer.
The function/method isEvenParity must return 1 if the given integer num has even parity. Else it must return 0.
Your task is to implement the function isEvenParity so that it passes all the test cases.
If the number of 1s in the binary representation of an integer is even, then it represents Even Parity.
If the number of 1s in the binary representation of an integer is odd, then it represents Odd Parity.
Example Input/Output 1:
Input:
50
Output:
Odd Parity
Explanation:
The binary representation of 50 is 110010.
The number of 1s in the binary representation of 50 is 3, which is odd.
So Odd Parity is printed as the output.
Example Input/Output 2:
Input:
23
Output:
Even Parity
int isEvenParity(int num)
{
    int arr[1000],a=num,i=0,count=0;
    while(num>0){
        arr[i++]=num%2;
        num/=2;
    }
    for(int j=0;j<i;j++){
        if(arr[j]==1)
        count+=1;
    }
    if(count%2==0)
    return 1;
    else
    return 0;
}
