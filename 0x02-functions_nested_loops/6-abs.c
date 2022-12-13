#include <stdio.h>
/**
*_abs- prints absolute value
*@int: the parameter
*
*Return: r if suceesful
*/
int _abs(int)
{
	if (num < 0)
	{
		int  r = num * -2;
		int k = r + num;

		return (k);
	}
	else
		return (num);
}
