#ifndef File_IO
#define File_IO
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void printer(int count);
void check_file_type(unsigned char *buffer);
void error_handler(int code);
void print_class(unsigned char *p);
void print_data(unsigned char *p);
void print_version(unsigned char *p);
void print_os(unsigned char *p);
void print_abi(unsigned char *p);
void print_type(Elf64_Ehdr *buffer);
void print_entry(Elf64_Ehdr *buffer, unsigned char *p);
#endif
