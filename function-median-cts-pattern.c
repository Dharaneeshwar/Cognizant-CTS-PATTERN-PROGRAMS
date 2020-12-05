Function median - CTS PATTERN
Author
letuscrack
You are required to complete the given code by reusing existing functions. You can click on Run anytime to check the compilation/ execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in given implementation. We do not expect you to modify the approach.
The function median(int *arr, int len) accepts an integer array arr of length len. It is supposed to calculate and return the median of elements in the array.
However, an incomplete code in the function median works only for odd length arrays.
You will have to complete the code to make it work for even length arrays as well. A couple of other functions quick_select and partition are available, which you are supposed to use inside the function median to complete the code.
float median(int *arr, int len)
{
    int start_index = 0, end_index = len - 1, median_position;
    float res = -1;
    if(len % 2 != 0)
    {
        median_position = (len + 1) / 2;
        res = (float)quick_select(arr, start_index, end_index, median_position);
    }
    else
    {
        int mp1=len/2;
        int res1=(float)quick_select(arr,start_index,end_index,mp1);
        int mp2=len/2+1;
        int res2=(float)quick_select(arr,start_index,end_index,mp2);
        res=(res1+res2)/2.0;
        
    }
    return res;
}
