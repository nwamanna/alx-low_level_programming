#include <stdio.h>
/**
* _isalpha - tells if an input is an alphabet
*
*c: parameter
*Return: 1 if alphabet
*/

int _isalpha(int c) /* c parameter */
{
	if ((c > 64) || (c < 91))
		return (1);
	else if ((c > 96) || (c < 123))
		return (1);
	else
		return (0);
}
