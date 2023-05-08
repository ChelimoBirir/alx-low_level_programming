#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void print_usage_and_exit(void) {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
}

void print_read_error_and_exit(const char *filename) {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
    exit(98);
}

void print_write_error_and_exit(const char *filename) {
    dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
    exit(99);
}

void print_close_error_and_exit(int fd) {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
    exit(100);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_usage_and_exit();
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_read_error_and_exit(file_from);
    }

    struct stat sb;
    if (fstat(fd_from, &sb) == -1) {
        print_read_error_and_exit(file_from);
    }

    mode_t mode = sb.st_mode & (S_IRWXU | S_IRWXG | S_IRWXO);  // Copy permissions from file_from

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (fd_to == -1) {
        print_write_error_and_exit(file_to);
    }

    char buffer[BUFFER_SIZE];
    ssize_t nread, nwritten;
    while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        nwritten = write(fd_to, buffer, nread);
        if (nwritten == -1 || nwritten != nread) {
            print_write_error_and_exit(file_to);
        }
    }

    if (nread == -1) {
        print_read_error_and_exit(file_from);
    }

    if (close(fd_from) == -1) {
        print_close_error_and_exit(fd_from);
    }

    if (close(fd_to) == -1) {
        print_close_error_and_exit(fd_to);
    }

    return 0;
}

