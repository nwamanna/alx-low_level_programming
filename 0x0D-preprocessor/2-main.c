#include <stdio.h>
/**
*main - prints name of program it was compiled from
*
*Return: 0 on success
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
