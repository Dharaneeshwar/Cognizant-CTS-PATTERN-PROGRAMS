Function encryptUnitDigit – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method encryptUnitDigit accepts an argument - num, an integer value to be encrypted.
The function/method encryptUnitDigit encrypts the unit digit of num by replacing it with the absolute difference between the unit digit and the tenth digit of num. Then the function returns the encrypted integer.
Note: The value of num is always greater than 9.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
893
Output:
896
Explanation:
The unit digit of 893 is 3. 
The tenth digit of 893 is 9.
The unit digit of 893 is replaced with the absolute difference between 9 and 3 (6).
So 896 is printed as the output.
Example Input/Output 2:
Input:
4713
Output:
4712
int encryptUnitDigit(int num)
{
    int unitDigit = num % 10;
    int tenthDigit = (num % 100) / 10;
    int diff = abs(unitDigit - tenthDigit);
    return ((num / 10)*10) + diff;
}
