#include <stdio.h>
/**
 * print_array - print number of element in array
 * @a: pointer to an integer
 * @n: numberof elements to print
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i < n - 1)
		{
			printf(" ");
		}
		a++;
	}
	printf("\n");
}
