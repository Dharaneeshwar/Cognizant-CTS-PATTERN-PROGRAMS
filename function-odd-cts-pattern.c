Function odd- CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need is correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function void* odd(int* arr, int len) accepts an integer array arr of length len ( len > 0 ) as the input. It is supposed to return a new array which must consist of all the odd integers in the array arr.
The function compiles successfully but fails to return the desired result due to logical errors.
Your task is to debug the program to pass all the test cases.
void *odd(int *arr, int len)
{
    int index, newIndex=0;
    int *p=(int *) malloc(sizeof(int)*len);
    for(index=0; index<len; index++)
    {
        if(arr[index] % 2 != 0)
        {
            p[newIndex++] = arr[index];
        }
    }
    return p;
}
