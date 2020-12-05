Function addRectangles - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function addRectangles(Rectangle Rl, Rectangle R2) accepts two rectangles as input. The function is supposed to return a new rectangle formed by adding the given two rectangles. 
If the first rectangle has length and breadth of 10 and 5, the second rectangle has the length and breadth of 6 and 2 then the new rectangle formed will be of length 16 and breadth 7.
You will have to complete the code to make it work for all test cases.
typedef struct _rectangle
{
    int length, breadth;
} Rectangle;
Rectangle* addRectangles(Rectangle *R1, Rectangle *R2)
{
    Rectangle *obj = malloc(sizeof(Rectangle*));
    obj->length = R1->length + R2->length;
    obj->breadth = R1->breadth + R2->breadth;

    return obj;
}
