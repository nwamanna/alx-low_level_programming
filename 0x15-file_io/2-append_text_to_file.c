#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2;
	fd = open(filename, O_WRONLY|O_APPEND);
	fd2 = write(fd, text_content, strlen(text_content));
	printf("%d", fd2);
	close(fd);
	return(fd2);
}
