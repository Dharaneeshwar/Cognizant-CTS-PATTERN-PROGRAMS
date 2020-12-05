Function Manchester - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on compile & Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need is correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function manchester(int* arr, int len) accepts an integer array arr of length len ( len >= 0 ) as the input. Each element of arr represents a bit->  0 or 1.
The output is an array with the following property:
For each element in the input array is, if the bit arr[i] is the same as arr[i-1], then the element of the output array is 0. If they are different, then its 1. For the first bit in the input array, assume its previous bit to be 0. This encoding is stored and returned in a new array.
For example, if arr is {0, 1, 0, 0, 1, 1, 1, 0} the function should return an array {0, 1, 1, 0, 1, 0, 0, 1}
The function compiles successfully but fails to return the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
void *manchester(int *arr, int len)
{
    int *res = (int *)malloc(sizeof(int)*len);
    if(arr[0]==0)
    res[0]=0;
    else
    res[0]=1;
    for(int index = 1; index < len; index++)
    {
        if(arr[index]!=arr[index-1]){
            res[index]=1;
        }
        else{
            res[index]=0;
        }
    }
    return res;
}
