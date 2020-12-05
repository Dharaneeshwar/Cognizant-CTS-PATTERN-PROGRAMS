Function removeElement from Array - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: The function removeElement(int *arr, int LENGTH, int index) takes an array arr of length LENGTH as input. It is supposed to return an array after removing the integer at the given index in the input array arr. If the given index is out of bounds, then this function should return the input array arr. The function compiles successfully but fails to return the desired result due to logical errors
You will have to edit and correct the code to make it work for all test cases.
int* removeElement(int *arr, int LENGTH, int index)
{
    if(index > LENGTH)
    {
        return arr;
    }
    else
    {
        for(int i=index; i <= LENGTH-1; i++)
        {
            arr[i] = arr[i+1];
        }
        int *rarr = malloc (sizeof(int)*(LENGTH-1));
        for(int i=0; i < LENGTH; i++)
        {
            rarr[i] = arr[i];
        }
        return rarr;
    }
}
