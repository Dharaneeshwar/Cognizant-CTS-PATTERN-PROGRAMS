Function getProductOfDigits – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method getProductOfDigits accepts two arguments - SIZE and list, an integer representing the size of the list and the list of integers.
The function/method getProductOfDigits is supposed to return the product of all the single-digit integers in the given array.
Note: At least one single-digit integer is always present in the given array.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
5
-5 40 8 2 698
Output:
-80
Explanation:
The given 5 integers are -5, 40, 8, 2 and 698.
The single-digit integers in the given 5 integers are -5, 8 and 2.
The product of -5, 8 and 2 is -80. So -80 is printed as the output.
Example Input/Output 2:
Input:
8
75 6 20 67 31 -55 8 -51
Output:
48
int getProductOfDigits(int SIZE, int *list)
{
    long long int product = 1;
    for(int index = 0; index < SIZE; index++)
    {
        if(list[index] < 10 && list[index]>=-9)
        {
            product = (list[index]*product);
        }
    }
    return product;
}
