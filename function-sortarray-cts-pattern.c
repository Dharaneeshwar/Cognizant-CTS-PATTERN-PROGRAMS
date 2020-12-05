Function sortArray - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: The function sortArray(int* arr, int len) sorts an integer array arr as input and perform an in place selection sort. The function sorts the input array in ascending order. The function compiles fine but does not return desired results for some cases. Your task to fix  the code so but that it passes at test cases
You will have to edit and correct the code to make it work for all test cases.
int* sortArray(int arr[], int len)
{
    int x=0,y=0;
    for(x=0; x<len-1; x++)
    {
        int index_of_min = x;
        for(y=x+1; y<len; y++)
        {
            if(arr[y]<arr[index_of_min])
            {
                index_of_min=y;
            }
        }
        int temp=arr[x];
        arr[x]=arr[index_of_min];
        arr[index_of_min]=temp;
    }
    return  arr;
}
