#include "main.h"
/**
*main - copies file_from to file_to
*@ac: count of arguments
*@av: argument vector
*
*Return: Return 0 on success
*/
int main(int ac, char **av)
{
	int fd, fd1, fd2, fd3, close1, close2;
	char *buffer = malloc(1024);
	mode_t old_umask = umask(0);

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	fd1 = read(fd, buffer, 1024);
	if (fd < 0 || fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		exit(98);
	}
	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	umask(old_umask);
	fd3 = write(fd2, buffer, 1024);
	if (fd2 < 0 || fd3 < 0)
	{
		dprintf(2, "Error: Can't write to %s", av[2]);
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
