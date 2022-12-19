#include <stdio.h>
/**
 * _strlen - value of a to b and b to a
 * @s: pointer to an string
 *
 * Return: Void
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum += 1;
	}
	return (sum);
}
