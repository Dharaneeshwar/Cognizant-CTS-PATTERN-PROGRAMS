Function printXAlphabetsCircularly – CTS PATTERN
Author
letuscrack
You are required to fix all the logical errors in the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation. We do not expect you to modify the approach or incorporate any additional library methods.
The function/method printXAlphabetsCircularly accepts two arguments - ch and X, a character representing an alphabet and an integer X.
The function/method printXAlphabetsCircularly is supposed to print the next X alphabets of ch. The English alphabet set is considered in a cyclic fashion for the next X alphabets.
Your task is to fix the code so that it passes all the test cases.
Example Input/Output 1:
Input:
w 10
Output:
w x y z a b c d e f
Explanation:
The next 10 alphabets of w are w, x, y, z, a, b, c, d, e and f.
Hence the output w x y z a b c d e f
Example Input/Output 2:
Input:
H 5
Output:
H I J K L
void printXAlphabetsCircularly(char ch, int X)
{
    int f=0;
    if(ch>='a' && ch<='z'){
        f=1;
    }
    for(int ctr = 1; ctr <= X; ctr++)
    {
        ch=tolower(ch);
        if(ch >'z')
        {
            ch = 'a';
        }
        if(f==1)
        {
            printf("%c ",ch);
        }
        else{
            printf("%c ",ch-32);
        }
        ch++;
    }
}
