#include <stdio.h>
/**
*_isdigit - returns one if alphabet is upper
*@c: parameter
*
*Return: 1 or 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);

}
