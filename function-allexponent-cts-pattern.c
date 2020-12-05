Function allExponent – CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
The function/method allExponent accepts two arguments - baseValue, an integer representing the base and exponentValue, an integer representing the exponent.
The function/method allExponent returns a real number representing the result of exponentiation of base raised to power exponent for all input values. The incomplete code in the function/method allExponent works only for positive values of the exponent. You must complete the code and make it work for negative values of exponent as well.
The function/method positiveExponent(int baseValue, int exponentValue) must return the exponentiation for the positive exponent value. This function is already implemented in the default code (Do not write this definition again in your code).
You are supposed to use this function/method to complete the code in allExponent function/method to pass all the test cases.
Note: The result of the exponentiation is always printed with the precision up to two decimal places.
Example Input/Output 1:
Input:
2 5
Output:
32.00
Explanation:
Here the base value is 2 and the exponent value 5.
The exponentiation of 2 raised to the power 5 is 32.
So 32 is printed with the precision up to two decimal places.
Hence the output is 32.00
Example Input/Output 2:
Input:
4 -1
Output:
0.25
float allExponent(int baseValue, int exponentValue)
{
    float result = 1;
    if(exponentValue >= 0)
    {
        result = (float)positiveExponent(baseValue, exponentValue);
    }
    else
    {
    return pow(baseValue,exponentValue);
    }
    return result;
}
