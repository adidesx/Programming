/* 
   Sum and difference of 2 numbers
   Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
   Declare 4 variables: two of type int and two of type float.
   Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
   Use the + and - operator to perform the following operations:
   Print the sum and difference of two int variable on a new line.
   Print the sum and difference of two float variable rounded to one decimal place on a new line.

   Input String
   The first line contains two integers.
   The second line contains two floating point numbers.

   Constraints
   1 <= integer variable <= 10 power 4
   1 <= float variable <= 10 power 4

   Output
   Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.

   Sample input
   10 4
   4.0 2.0

   Sample output
   14 6
   6.0 2.0
*/

#include <stdio.h>

int main()
{
	int i1, i2, integer_sum, integer_diff;
	float f1, f2, float_sum, float_diff;

	printf("Enter Two Integer Value : ");
	scanf("%d %d", &i1, &i2);
	
	printf("Enter Two Float Value : ");
	scanf("%f %f", &f1, &f2);

	integer_sum = i1 + i2;
	integer_diff = i1 - i2;
	float_sum = f1 + f2;
	float_diff = f1 - f2;

	printf("%d %d\n", integer_sum, integer_diff);
	printf("%0.1f %0.1f\n", float_sum, float_diff);

	return 0;
}
