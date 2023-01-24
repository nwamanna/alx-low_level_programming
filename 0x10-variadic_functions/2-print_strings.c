#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - sums all arguments provided
*@separator: separates numbers
*@n: const parameter
*
*Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n ; i++)
	{
		char *string = va_arg(ptr, char*);

		if (string == NULL)
		{
			printf("(nil)");
			break;
		}
		if (i == n - 1)
		{
			printf("%s", string);
			break;
		}
		printf("%s", string);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");

}
