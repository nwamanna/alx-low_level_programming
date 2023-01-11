#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*free_grid - frees memory allocated to a 2 dimensional array
*@grid: pointer to 2 dimensional array
*@height: columns
*
*Return: Void
*/

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *concatenated_string = malloc(total_length * sizeof(char));
	int current_index = 0;
	int i, j;

    if (ac == 0 || av == NULL)
	{
        return NULL;
    }
    for (i = 0; i < ac; i++)
	{
        total_length += strlen(av[i]) + 1;
    }
	if (concatenated_string == NULL)
	{
        return NULL;
    }
	for (i = 0; i < ac; i++)
	{
        for (j = 0; av[i][j] != '\0'; j++)
		{
            concatenated_string[current_index++] = av[i][j];
        }
        concatenated_string[current_index++] = '\n';
    }

    return concatenated_string;
}
