#include <stdio.h>
/**
*print_last_digit - returns the last digit
*@num: parameter for the fucnton
*
*Return: k
*/
int print_last_digit(int num)
{
	int k = num % 10;

	printf("%d", k);
	return (k);
}
