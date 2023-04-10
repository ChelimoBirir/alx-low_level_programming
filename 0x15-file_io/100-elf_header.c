#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - displays information contained in the ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int fd, byte_read;
    Elf64_Ehdr elf_header;
    char *magic = "\177ELF";

    /* Check if there are enough arguments */
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    /* Open the file for reading */
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
        return (98);
    }

    /* Read the ELF header */
    byte_read = read(fd, &elf_header, sizeof(elf_header));
    if (byte_read < sizeof(elf_header))
    {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header in file %s\n", argv[1]);
        close(fd);
        return (98);
    }

    /* Check if the file is an ELF file */
    if (memcmp(elf_header.e_ident, magic, strlen(magic)) != 0)
    {
        dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        return (98);
    }

    /* Print the ELF header information */
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", elf_header.e_ident[i]);
    printf("\n");
    printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", elf_header.e_ident[EI_VERSION], elf_header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            ");
    switch (elf_header.e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV: printf("UNIX System V ABI"); break;
        case ELFOSABI_HPUX: printf("HP-UX ABI"); break;
        case ELFOSABI_NETBSD: printf("NetBSD ABI"); break;
        case ELFOSABI_LINUX: printf("Linux ABI"); break;
        case ELFOSABI_SOLARIS: printf("Solaris ABI"); break;
        case ELFOSABI_IRIX: printf("IRIX ABI"); break;
        case ELFOSABI_FREEBSD: printf("FreeBSD ABI"); break;
        case ELFOSABI_TRU64: printf("TRU64 UNIX ABI"); break;
        case ELFOSABI_ARM: printf("ARM architecture ABI"); break;
        case ELFOSABI_STANDALONE: printf("Standalone (embedded) ABI"); break;
        default: printf("<unknown>"); break;
    }
    printf("\n");
    printf("  ABI Version:
