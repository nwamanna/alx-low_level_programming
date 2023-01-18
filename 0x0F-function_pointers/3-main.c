#include "3-calc.h"
int main(int argc, char **argv)
{
	int (*result)(int, int);

	if ((strcmp(argv[2], "%") || strcmp(argv[2], "/")) && (atoi(argv[3]) == 0))
	{
		printf("Error compare\n");
		exit(100);
	}
	if (argc != 4)
	{
		printf("Error count %d\n", argc);
		exit(98);
	}
	result = get_op_func(argv[2]);

	if (!result)
	{
		printf("Error result\n");
		exit(99);
	}
	printf("%d", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
