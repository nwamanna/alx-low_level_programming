#include "main.h"
/**
*copy - copies file_from to file_to
*@file_from: the file with content
*@file_to: the file to paste the content
*
*Return: Return 0 on success
*/
int copy(char *file_from, char *file_to)
{
	int fd, fd1, fd2, fd3, close1, close2;
	char *buffer = malloc(1024);
	mode_t old_umask = umask(0);

	if (buffer == NULL)
		exit(99);
	fd = open(file_from, O_RDONLY);
	fd1 = read(fd, buffer, 1024);
	if (fd < 0 || fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	umask(old_umask);
	fd3 = write(fd2, buffer, fd1);
	if (fd2 < 0 || fd3 != fd1)
	{
		dprintf(2, "Error: Can't write to %s", file_to);
		free(buffer);
		exit(99);
	}
	close1 =  close(fd);
	if (close1 < 0)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		free(buffer);
		exit(100);
	}
	close2 = close(fd2);
	if (close2 < 0)
	{
		dprintf(2, "Error: Can't close fd %d", fd1);
		free(buffer);
		exit(100);
	}
	free(buffer);
	return (0);
}
/**
*main - runs the program
*@ac: count of arguments
*@av: vector of argumets
*
*Return: 0 on succes
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(av[1], av[2]);
	return (0);
}
