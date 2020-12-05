Function countElement - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: The function countElement(int arr[],int len,int n) accepts an integer array arr of size len as input and returns the count of the elements in the array which are greater than two times n.
The function compiles fine but does not return desired results for some cases. Your task is to fix  the code so but that it passes all the test cases.
You will have to edit and correct the code to make it work for all test cases.
int countElement(int arr[],int len,int n)
{
    int i,count=0;
    for(i=0; i<=len; i++)
    {
        if(arr[i]>(2*n))
        {
            count+=1;
        }
    }
    return count;
}
