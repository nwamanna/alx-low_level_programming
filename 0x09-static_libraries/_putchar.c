#include <unistd.h>
#include "main.h"
/**
*_putchar - checks for upper charaters
*@c: parameter
*
*Return: integer
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
