#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - sums all arguments provided
*@separator: separates numbers
*@n: const parameter
*
*Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator == NULL)
	{
		exit(98);
	}
	else
	{
		va_list ptr;

		va_start(ptr, n);

		for (i = 0; i < n ; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(ptr, unsigned int));
				break;
			}
			printf("%d", va_arg(ptr, unsigned int));
			printf("%s", separator);

		}
		va_end(ptr);
		printf("\n");
	}
}
