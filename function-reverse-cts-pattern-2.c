Function reverse - CTS PATTERN
Author
letuscrack
You can click on Run anytime to check the compilation/ execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to complete the code by implementing the function.
The function reverse(int *arr, int LENGTH) accepts an integer array arr and an integer LENGTH as the size of arr. It is supposed to reverse the integers in place.
The function swap(int *, int *) is also available as a helper function to use.
You will have to complete the code to make it work for all test cases.
void reverse(int *arr, int LENGTH)
{
	int i = 0, j = LENGTH - 1;

	while (i < j)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		i++;
		j--;
	}
}
