#include <stdarg.h>
/**
*sum_them_all - sums all arguments provided
*@n: const parameter
*
*Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n != 0)
	{
		va_list ptr;
		va_start(ptr, n);

		for (i = 0; i < n ; i++)
		{
			sum += va_arg(ptr, unsigned int);
		}
		va_end(ptr);
		return (sum);
	}
	else
		return (0);
}
