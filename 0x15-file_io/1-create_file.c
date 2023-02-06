#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fd, fd2;
	fd = open(filename, O_EXCL|O_CREAT|O_RDWR|O_TRUNC, S_IWUSR|S_IRUSR);
	fd2 = write(fd, text_content, strlen(text_content));
	return(fd2);
}
