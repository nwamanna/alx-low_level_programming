#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <elf.h>

#define BUF_SIZE 1024

void error_exit(char *message)
{
        fprintf(stderr, "%s\n", message);
        exit(98);
}

int main(int argc, char *argv[])
{
        int fd;
        char buf[BUF_SIZE];
        Elf64_Ehdr *header;

        if (argc != 2)
        {
                error_exit("Usage: elf_header elf_filename");
        }

        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
                error_exit("Error: Cannot open file");
        }

        if (read(fd, buf, BUF_SIZE) == -1)
        {
                error_exit("Error: Cannot read file");
        }

        header = (Elf64_Ehdr *)buf;
        if (header->e_ident[0] != ELFMAG0 || header->e_ident[1] != ELFMAG1 || header->e_ident[2] != ELFMAG2 || header->e_ident[3] != ELFMAG3)
        {
                error_exit("Error: Not an ELF file");
        }

        printf("Magic:   ");
        for (int i = 0; i < EI_NIDENT; i++)
        {
                printf("%02x ", header->e_ident[i]);
        }
        printf("\n");
        printf("Class:                             ELF64\n");
        printf("Data:                              2's complement, little endian\n");
        printf("Version:                           1 (current)\n");
        printf("OS/ABI:                            UNIX - System V\n");
        printf("ABI Version:                       0\n");
        printf("Type:                              %d\n", header->e_type);
        printf("Entry point address:               0x%lx\n", header->e_entry);

        close(fd);
        return 0;
}
