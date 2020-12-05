Function printArrayCircular - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function printArrayCircular(int arr[],int Size, int Pos) accept the elements of an array , Size and the position Pos as the input. It is supposed to print all the values in array starting from posth integer circularly.
The function looks fine but gives some logical errors.
Your task is to fix the program so that it passes all test cases.
void printArrayCircular(int arr[], int Size,  int Pos)
{
    int index;
    index = Pos-1;
    int count=0;
    while(count<Size)
    {
        printf("%d ",  arr[index]);
        count++;
        if(index>Size-2)
        index-= Size;
        index++;
    }
}
