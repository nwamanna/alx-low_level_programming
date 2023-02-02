#include "main.h"
/**
*get_endianness - checks the endianness
*
*Return: 0 for big, 1 for small
*/
int get_endianness(void)
{
	u_int32_t num;
	char *c;

	num = 1;
	c = (char *)&num;
	if (*c == 1)
		return (1);
	else
		return (0);
}
