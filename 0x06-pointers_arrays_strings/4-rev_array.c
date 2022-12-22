#include <stdio.h>
/**
* reverse_array - reverses array
*@a: array to be reversed
*@n: number of elements
*
*Return: Void
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
