Function deleteNonRepeat – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method deleteNonRepeat accepts two arguments - SIZE and arr, an integer representing the size of the array arr and the integer array arr.
The function/method deleteNonRepeat removes the non-repeated integers and prints the remaining repeated integers separated by a space.
Note: Atleast two repeated integers are always present in the array arr.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
8
2 3 2 2 5 6 6 7
Output:
2 2 2 6 6
Explanation:
The given 8 integers are 2, 3, 2, 2, 5, 6, 6 and 7.
Here the non-repeated integers are 3, 5 and 7.
After removing the non-repeated integers, the array becomes 2, 2, 2, 6, 6.
Hence the output is
2 2 2 6 6
Example Input/Output 2:
Input:
7
10 18 67 49 73 55 10
Output:
10 10
void deleteNonRepeat(int SIZE, int *arr)
{
    int count = 0, i, j;
    int counter[SIZE];
    for(i=0; i<SIZE; i++)
    {
        counter[i] = 1;
    }
    for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(arr[i] == arr[j])
            {
                counter[i]++;
                counter[j]++;
            }
        }
    }
    for(i=0; i<SIZE; i++)
    {
        if(counter[i] > 1)
        {
            count++;
        }
    }
    for(i=0; i<SIZE; i++)
    {
        if(counter[i] > 1)
        {
            printf("%d ", arr[i]);
        }
    }
}
