#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * print_error - prints error message to stderr and exits with status code 98
 * @msg: the error message to print
 */
void print_error(char *msg)
{
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

/**
 * print_elf_header - prints the information contained in the ELF header
 * @ehdr: pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", ehdr->e_ident[i]);
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr->e_ident[EI_CLASS])
    {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32:   printf("ELF32\n"); break;
        case ELFCLASS64:   printf("ELF64\n"); break;
        default:           printf("<unknown: %x>\n", ehdr->e_ident[EI_CLASS]); break;
    }

    printf("  Data:                              ");
    switch (ehdr->e_ident[EI_DATA])
    {
        case ELFDATANONE: printf("none\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default:          printf("<unknown: %x>\n", ehdr->e_ident[EI_DATA]); break;
    }

    printf("  Version:                           %d\n", ehdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE:         printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX:         printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD:       printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX:        printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS:      printf("UNIX - Solaris\n"); break;
        case ELFOSABI_AIX:          printf("UNIX - AIX\n"); break;
        case ELFOSABI_IRIX:         printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD:      printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64:        printf("UNIX - TRU64\n"); break;
        case ELFOSABI_MODESTO:      printf("Novell - Modesto\n"); break;
        case ELFOSABI_OPENBSD:      printf("UNIX - OpenBSD\n"); break;
        case ELFOSABI_ARM_AEABI:    printf("ARM EABI\n"); break;
        case ELFOSABI_ARM:          printf("ARM\n"); break;
        case ELFOSABI_STANDALONE:   printf

