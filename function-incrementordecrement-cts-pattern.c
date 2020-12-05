Function incrementOrDecrement – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method incrementOrDecrement accepts two arguments - SIZE and arr, an integer representing the size of the array and the array arr.
The function/method incrementOrDecrement is supposed to modify the array based on the following conditions.
- If the last two digits of an integer are identical, the function must decrement the value by 1.
- Else the function must increment the value by 1.
- If an integer does not have two digits, the function must keep the integer as it is.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
6
4866 74 770 6377 840 85
Output:
4865 75 771 6376 841 86
Explanation:
In the first integer 4866, the last two digits are identical. So the integer 4866 is decremented by 1.
In the second integer 74, the last two digits are not identical. So the integer 74 is incremented by 1.
In the third integer 770, the last two digits are not identical. So the integer 770 is incremented by 1.
In the fourth integer 6377, the last two digits are identical. So the integer 6377 is decremented by 1.
In the fifth integer 840, the last two digits are not identical. So the integer 840 is incremented by 1.
In the sixth integer 85, the last two digits are not identical. So the integer 85 is incremented by 1. 
Example Input/Output 2:
Input:
10
188 72 9 22 1 28 79 82 67 700
Output:
187 73 9 21 1 29 80 83 68 699
void incrementOrDecrement(int SIZE, int arr[])
{
    for(int index = 0; index < SIZE; index++)
    {
        if(arr[index] < 10)
        {
            continue;
        }
        if(arr[index] % 10 == arr[index] % 100 / 10)
        {
            arr[index]--;
        }
        else
        {
            arr[index]++;
        }
    }
}
