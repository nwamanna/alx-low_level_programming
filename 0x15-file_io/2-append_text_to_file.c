#include "main.h"
/**
*append_text_to_file - append text to file
*@filename: name of file
*text_content
*Return: 1 on success -1 o error
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY|O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return 1;
	fd2 = write(fd, text_content, strlen(text_content));
	if (fd2 < 0)
	{
		close(fd);
		return -1;
	}
	close(fd);
	return(1);
}
