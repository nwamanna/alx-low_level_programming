#include <stdio.h>
#include "main.h"
/**
* factorial - counts number of letters in a string
*@n: integer parameter
*
*Return: integer, factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1);
}
