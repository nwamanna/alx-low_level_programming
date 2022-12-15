#include <stdio.h>
/**
*_isupper - returns one if alphabet is upper
*@c: parameter
*
*Return: 1 or 0
*/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);

}
