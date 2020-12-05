Function area- CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function double area(struct Point *tl, struct Point *tr, struct Point *br, struct Point *bl) accepts four coordinates of a rectangle in the order of top left, top right, bottom right and bottom left coordinates. It is supposed to return the area of the rectangle.
Another function double sqrt(double val) is available as helper function to use.
You will have to complete the code to make it work for all test cases.
struct Point{
    int x, y;
};
double distance(struct Point *p1, struct Point *p2)
{
    return sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
}

double area(struct Point *tl, struct Point *tr, struct Point *br, struct Point *bl)
{
    double a = distance(tl, tr);
    double b = distance(tr, br);
    double c = distance(br, bl);
    double d = distance(bl, tl);
    return a * b;
}
