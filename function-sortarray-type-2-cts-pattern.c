Function sortArray (type-2) – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method sortArray accepts two arguments - SIZE and arr,an integer representing the size of the array arr and the integer array arr.
The function/method sortArray is supposed to sort the integers in the array in descending order.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
39 10 12 50 15 32
Output:
50 39 32 15 12 10
Explanation:
The given 6 integers are 39, 10, 12, 50, 15 and 32.
After sorting the integers in the array in descending order, the array becomes 50, 39, 32, 15, 12 and 10.
Hence the output is
50 39 32 15 12 10
Example Input/Output 2:
Input:
7
5 3 1 8 6 2 7
Output:
8 7 6 5 3 2 1
void sortArray(int SIZE, int arr[])
{
    int i, max, location, j, temp;
    for(int i=0; i < SIZE; i++)
    {
        max = arr[i];
        location = i;
        for(int j=i; j < SIZE; j++)
        {
            if(max < arr[j])
            {
                max = arr[j];
                location=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[location];
        arr[location]=temp;
    }
}
