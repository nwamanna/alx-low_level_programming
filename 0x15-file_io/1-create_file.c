#include "main.h"
/**
*create_file _ create file
*@filename: name of file
*@text_content: content to be written
*
*Return: 1 on success -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, fd2;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_EXCL|O_CREAT|O_RDWR|O_TRUNC, S_IWUSR|S_IRUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	fd2 = write(fd, text_content, strlen(text_content));
	if (fd2 < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return(1);
}
