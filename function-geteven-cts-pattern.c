Function getEven - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function getEven(int *arr, int LENGTH) accepts an array arr and an integer LENGTH as the size of arr. The function is supposed to return even numbers in the array.
You will have to complete the code to make it work for all test cases.
typedef struct _evenNumbers
{
    int numbers[1000], size;
} EvenNumbers;
EvenNumbers* getEven(int *arr, int LENGTH)
{
    EvenNumbers *obj = malloc(sizeof(EvenNumbers*));
    int ind = 0, i = 0;
    while (i < LENGTH)
    {
        if (arr[i] % 2 == 0)
        {
            obj->numbers[ind++] = arr[i];
        }

        i++;
    }

    obj->size = ind;
    return obj;
}
