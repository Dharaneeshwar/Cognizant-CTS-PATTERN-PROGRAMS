Function isTriangle – CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
You are given a predefined structure Point and also a collection of related functions/methods that can be used to perform some basic operations on the structure.
The function/method isTriangle which accepts three points P1, P2, P3 as the inputs and checks whether the given three points form a triangle.
Another function/method Point_calculateDistance(Point *point1, Point *point2) returns the double value representing the distance between the two points. This function is already implemented in the default code (Do not write this definition again in your code).
Your task is to use Point_calculateDistance(Point *point1, Point *point2) function and complete the code in the function isTriangle so that it passes all the test cases.
The following structure is used to represent Point and is already implemented in the default code (Do not write this definition again in your code).
typedef struct point
{
    int X;
    int Y;
}Point;
Example Input/Output 1:
Input:
3 2
-2 -3
2 3
Output:
YES
Explanation:
Here, the sum of any 2 sides is greater than the other side.
So the given 3 points can form a triangle.
Hence the output is YES.
Example Input/Output 2:
Input:
-2 4
4 4
0 4
Output:
NO
int isTriangle(Point *P1, Point *P2, Point *P3)
{
    int a=Point_calculateDistance(P1,P2);
    int b=Point_calculateDistance(P2,P3);
    int c=Point_calculateDistance(P1,P3);
    return a+b > c && a+c > b && b+c > a;
}
