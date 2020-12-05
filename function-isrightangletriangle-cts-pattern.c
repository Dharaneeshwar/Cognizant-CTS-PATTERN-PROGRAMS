Function isRightAngleTriangle - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function isRightAngleTriangle(struct Point *p1, struct Point *p2, struct Point *p3) accepts three coordinates. It is supposed to return 1 if the points form a right angle triangle. Else the function must return 0.
You will have to complete the code to make it work for all test cases.
struct Point{
    int x, y;
};
int distance(struct Point *p1, struct Point *p2)
{
    return pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2);
}

int isRightAngleTriangle(struct Point *p1, struct Point *p2, struct Point *p3)
{
    int a = distance(p1, p2);
    int b = distance(p2, p3);
    int c = distance(p3, p1);
    
    return a + b == c || a + c == b || b + c == a;
}
