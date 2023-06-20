#include <stdio.h>

/**
 * Function declaration
 */

int max(int num1, int num2);
int main(void)
{
	/**
	 * Local variable definition
	 */
	int a;
	int b;
	int ret;

	/**
	 * Requesting user input
	 */

	printf("Enter value for a : ");
	scanf("%d", &a);

	printf("Enter value for b : ");
	scanf("%d", &b);

	/**
	 * Calling a function to get max value
	 */
	ret = max(a, b);
	printf("Max value is : %d\n", ret);
	return 0;
}

/**
 * Function returning the max between
 * two numbers
 *
 */
int max(int num1, int num2)
{
	/**
	 * local variable declaration
	 */
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}
