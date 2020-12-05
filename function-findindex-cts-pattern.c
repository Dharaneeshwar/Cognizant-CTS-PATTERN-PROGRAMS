Function findIndex - CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method findIndex accepts three arguments - size, list and key, an integer representing the size of the list, a list of integers and an integer representing the value to search in the given list respectively.
The function/method findIndex is supposed to return the index of the key value if key is found in the list. Else it must return -1.
Your task is to fix the code so that it passes all the test cases.
int findIndex(int SIZE, int *list, int key)
{
    for(int i=0; i<SIZE; i++)
    {
        if(list[i]==key)
        {
            return i;
        }
    }
    return -1;
}
