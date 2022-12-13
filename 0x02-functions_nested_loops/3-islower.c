#include <stdio.h>
/**
*_islower - chose only lower letter
*@c: parameter
*
*Return: 1 if small letter
*/

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
}
