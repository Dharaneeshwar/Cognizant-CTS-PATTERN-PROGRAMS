Function removeKLargestElement - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method removeKLargestElement accepts three arguments - len, K and arr, an integer representing the size of the array arr, an integer value and the integer array arr respectively.
The function/method removeKLargestElement must print the integers in the array arr after removing Kth largest integer in the array arr.
The function/method removeKLargestElement uses another error-free function/method kLargestElement which accepts three arguments - len, K and arr, an integer representing the size of the array arr, an integer value and the integer array arr respectively. It returns an integer representing the Kth largest integer in the input array arr.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
10 18 12 39 26 13 
2
Output:
10 18 12 39 13
Explanation:
The given 6 integers are 10, 18, 12, 39, 26 and 13.
Here K = 2, so the 2nd largest integer is 26.
After removing the integer 26, the array becomes 10, 18, 12, 39 and 13.
Hence the output is 
10 18 12 39 13
Example Input/Output 2:
Input:
7
15 18 67 49 73 55 10
9
Output:
15 18 67 49 73 55 10
int kLargestElement(int len, int K, int* arr)
{
    int kth, temp;
    int *rarr = (int)malloc(sizeof(int)*(len));
    for(int i=0; i<len; i++)
    {
        rarr[i] = arr[i];
    }
    for(int i1 = 0; i1 < len; i1++)
    {
        for(int j1 =i1+1; j1 <len; j1++)
        {
            if(rarr[i1] > rarr[j1])
            {
                temp = rarr[i1];
                rarr[i1] = rarr[j1];
                rarr[j1] = temp;
            }
        }
    }
    kth =rarr[len-K];
    return kth;
}

void removeKLargestElement(int len, int K, int* arr)
{
    if(K > 0 && K <= len)
    {
        int i, j, kth, temp;
        kth = kLargestElement(len, K, arr);
        int pos = 0;
        for(int j1=0; j1<len; j1++)
        {
            if(arr[j1] == kth)
            {
                pos = j1;
                break;
            }
        }
        for(i=0; i < len; i++)
        {
            if(i != pos)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    else
    {
        for(int i=0; i < len; i++)
        {
            printf("%d ", arr[i]);
        }
    }

}
