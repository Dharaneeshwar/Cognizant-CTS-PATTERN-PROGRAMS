Function getCount – CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
The function/method getCount accepts two arguments - str and flag, a character array representing a string and an integer value flag.
The function/method getCount is supposed to return an integer based on the following conditions.
- If the value of flag is 0, then it returns the count of vowels in the string str.
- Else it returns the count of consonants in the string str.
However, an incomplete code in the function getCount works only for flag = 0.
Your task is to complete the code to make it work for flag != 0 as well. An another function isVowel is available, which you are supposed to use inside the function getCount to complete the code.
The function/method isVowel is given below. Do not write this definition again in your code.
int isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
Example Input/Output 1:
Input:
skillRACK#123
0
Output:
2
Explanation:
Here flag = 0.
The vowels in the given string skillRACK#123 are i and A.
So the count 2 is printed as the output. 
Example Input/Output 2:
Input:
skillRACK#123
1
Output:
7
int getCount(char str[], int flag)
{
    int count = 0;
    for(int i=0; i<strlen(str);i++)
    {
    if(flag == 0)
    {
            if(isVowel(str[i])==1)
            {
                count++;
            }
    }
    else
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            if(isVowel(str[i])==0){
                count++;
            }
        }
        
    }
    }
    return count;
}
