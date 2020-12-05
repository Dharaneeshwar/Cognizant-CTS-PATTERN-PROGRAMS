Function addSeconds - CTS PATTERN
Author
letuscrack
You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.
The function/method addSeconds accepts two arguments - time and S, representing a time and the number of seconds S to be added in the time respectively.
The function/method addSeconds must add S seconds to the given time.
Note: The given time is always in 24-hr format (HH:MM:SS).
Your task is to implement the function addSeconds so that it passes all the test cases.
The following structure is used to represent the time and is already defined in the default code (Do not write this definition again in your code).
typedef struct
{
    int hour;
    int minute;
    int second;
} Time;
Example Input/Output 1:
Input:
09:15:10
125
Output:
09:17:15
Explanation:
The given time is 09:15:10 and the number of seconds to be added is 125.
After adding 15 seconds to the given time, the time becomes 09:17:15.
Example Input/Output 2:
Input:
23:59:15
46
Output:
00:00:01
void addSeconds(Time *time, int S)
{
    time->second += S;
    if(time->second>=60){
        time->minute += (time->second / 60) ;
        (time->second) %= 60 ;
    }
    if(time->minute>=60){
        time->hour += (time->minute / 60) ;
        (time->minute) %= 60 ;
    }
    if(time->hour>=24){
        time->hour = time->hour%24 ;
    }
}
