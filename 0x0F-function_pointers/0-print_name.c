#include <stdlib.h>
/**
*print_name - prints the name
*@name: name to be printed
*@f: pointer to function
*
*Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
