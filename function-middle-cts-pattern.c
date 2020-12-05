Function middle - CTS PATTERN
Author
letuscrack
Function Middle: You are required to correct the syntax of the given code without changing its logic. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function middle(int num) accepts an integer num as the input. If the count of digits in the integer num is odd then the function returns the middle digit of the integer num. Else the function returns the two digits in the middle of the integer num.
Another function findTenPowVal(int N) accepts a positive integer N as the input is available as a helper function to use. It returns the value of 10N.
The function middle(int num) compiles successfully but fails to return the desired result due to logical error.
Your task is to fix the program so that it passes all test cases.
int middle(int num)
{
    int count=0,temp=num;
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    if(count%2==1)
    {
        num=num/(findTenPowVal(count/2));
        return num%10;
    }
    else
    {
        num=num/(findTenPowVal((count)/2));
        return num%100;
    }
}
int middle(int num)
{
    int count=0,temp=num;
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    if(count%2==1)
    {
        num=num/(findTenPowVal(count/2));
        return num%10;
    }
    else
    {
        num=num/(findTenPowVal((count-1)/2));
        return num%100;
    }
}
