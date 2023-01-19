#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - prints all arguments
*@format: list of types of arguments
*
*Return: Void
*/
/**
*struct type - struct
*@letter: letter
*@place: placeholder
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	struct type
	{ 
		char *letter;
		char *place;
	};
	struct type list[] = {
		{"c", "%c"},
		{"i", "%d"},
		{"f", "%u"},
		{"s", "%s"},
		{NULL, NULL}
		   		};
	va_list ptr;

	va_start(ptr, format);

	while (i != '0')
	{
		char *cmp = list[i].letter;
		const char *word = format;
		char *string = va_arg(ptr, char*);

		if (string == NULL || format == NULL)
		{
			printf("(nil)");
		}
		if (word == cmp)
		{
			printf(list[i].place, string);
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
