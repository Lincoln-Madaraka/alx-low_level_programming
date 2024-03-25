 a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);

 a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);

a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);

a program that copies the content of a file to another file.

Usage: cp file_from file_to

 program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
