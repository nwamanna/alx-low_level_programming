#include "variadic_functions.h"
/**
*print_all - prints all arguments
*@format: list of types of arguments
*Return: Void
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	const char *word;

	if (format == NULL)		
		printf("Error");
	else
	{
		word = format;

		va_start(ptr, format);
		while (*word)
		{
			char letter = *word;
			char *string;

			if (letter == 'c')
				printf("%c", (char)va_arg(ptr, int));
			else if (letter == 'i')
				printf("%d", va_arg(ptr, int));
			else if (letter == 'f')
				printf("%f", (float)va_arg(ptr, double));
			else if (letter == 's')
			{
				string = va_arg(ptr, char*);
				if (string == NULL)
					printf("nil");
				else
					printf("%s", string);
			}
			else
			{
				word++;
				continue;
			}
			word++;
			if(*word == '\0')
				break;
			printf(", ");
		}
		va_end(ptr);
		printf("\n");
	}
}
