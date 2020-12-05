Function maxReplace - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function maxReplace(int *arr, int len) accepts an array arr of size len as input. It is supposed to replace all the values in arr by the maximum value in arr and return arr.
The function looks fine but gives a compilation error.
Your task is to debug the program to pass all test cases
int* maxReplace(int *arr, int len)
{
    int i,max;
    if(len>0)
    {
        max=arr[0];
        for(i=0; i<len; i++)
        {
            if(max<arr[i])
                max=arr[i];
        }
    }
        for(i=0; i<len; i++)
            arr[i]=max;
    return arr;
}
