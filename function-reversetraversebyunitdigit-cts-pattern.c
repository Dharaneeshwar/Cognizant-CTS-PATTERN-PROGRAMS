Function reverseTraverseByUnitDigit - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function reverseTraverseByUnitDigit(int arr[], int N) accepts an array of size N as the input. It is supposed to traverse and print the array in reverse order based on the following three conditions. When encountering an even integer skip the next element. When encountering an odd integer skip the next two elements. The array is traversed starting from the last element.
The function compiles fine but fails to print the desired result.
Your task is to fix the program so that it passes all test cases.
void reverseTraverseByUnitDigit(int arr[], int N)
{
    int index=N-1;
    while(index>0)
    {
        if(arr[index] % 2 == 0)
        {
            printf("%d ",arr[index]);
            index -= 2;
        }
        else
        {
            printf("%d ",arr[index]);
            index -=3 ;
        }
    }
}
