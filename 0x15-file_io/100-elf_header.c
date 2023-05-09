#include <elf.h>
#include "main.h"
/**
 * check_elf - this funct Checks if a file is an ELF file or not.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
{
printf("Error: Not an ELF file\n");
exit(98);
}}


/**
 * close_elf - this funct Closes an ELF file.
 * @elf: The file descriptor within the ELF file.
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
while (close(elf) == -1)
{
if (errno == EINTR)
continue;
printf("Error: Can't close fd %d\n", elf);
exit(98);
}}

/**
 * print_magic - this funct prints the magic number of an ELF header.
 * @e_ident: points to an array containing the ELF class.
 */
void print_magic(unsigned char *e_ident)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');
}

/**
* print_class - this funct prints the class of an ELF header.
* @e_ident: points to an array containing the ELF class.
*/
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
if (e_ident[EI_CLASS] == ELFCLASSNONE)
{
printf("none\n");
}
else if (e_ident[EI_CLASS] == ELFCLASS32)
{
printf("ELF32\n");
}
else if (e_ident[EI_CLASS] == ELFCLASS64)
{
printf("ELF64\n");
}
else
{
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}


/**
* print_data - this funct Prints the data format of an ELF header.
* @e_ident: A pointer to an array containing the ELF identification bytes.
*/
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");

if (e_ident[EI_DATA] == ELFDATANONE)
{
printf("none\n");
}
else if (e_ident[EI_DATA] == ELFDATA2LSB)
{
printf("2's complement, little endian\n");
}
else if (e_ident[EI_DATA] == ELFDATA2MSB)
{
printf("2's complement, big endian\n");
}
else
{
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_version - this funct prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
int i = 0;
while (i < EI_NIDENT)
{
if (i == EI_VERSION)
{
printf("  Version:                           %d", e_ident[EI_VERSION]);

if (e_ident[EI_VERSION] == EV_CURRENT)
{
printf(" (current)\n");
}
else
{
printf("\n");
}
break;
}
i++;
}}


/**
* print_osabi - this funct prints the OS/ABI of an ELF header.
* @e_ident: points to an array containing the ELF version.
*/
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");

if (e_ident[EI_OSABI] == ELFOSABI_NONE)
{
printf("UNIX - System V\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
{
printf("UNIX - HP-UX\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
{
printf("UNIX - NetBSD\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
{
printf("UNIX - Linux\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
{
printf("UNIX - Solaris\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
{
printf("UNIX - IRIX\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
{
printf("UNIX - FreeBSD\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
{
printf("UNIX - TRU64\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
{
printf("ARM\n");
}
else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
{
printf("Standalone App\n");
}
else
{
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}}

/**
* print_abi - this funct prints the ABI version of an ELF header.
* @e_ident: points to an array containing the ELF ABI version.
*/
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}


/**
* print_type -thei funct Prints the type of an ELF header.
* @e_type: This represents the ELF type.
* @e_ident: points to an array containing the ELF class.
*/
void print_type(unsigned int e_type, unsigned char *e_ident)
{
int i = 0;
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_type >>= 8;
}
printf("  Type:                              ");

struct {
int value;
char *name;
} types[] =
{
{ET_NONE, "NONE (None)"},
{ET_REL, "REL (Relocatable file)"},
{ET_EXEC, "EXEC (Executable file)"},
{ET_DYN, "DYN (Shared object file)"},
{ET_CORE, "CORE (Core file)"},
};

while (i < sizeof(types) / sizeof(types[0]))
{
if (e_type == types[i].value) {
printf("%s\n", types[i].name);
return;
}
i++;
}
printf("<unknown: %x>\n", e_type);
}


/**
 * print_entry - this funct prints the entry point of an ELF header.
 * @e_entry: address of the ELF entry-point.
 * @e_ident: points to an array containing the class of ELF.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
unsigned char *p = (unsigned char *)&e_entry;
unsigned char *end = p + sizeof(unsigned long int);
while (p < end) {
unsigned char tmp = *p;
*p++ = *(end - 1);
*(end - 1) = tmp;
}}

if (e_ident[EI_CLASS] == ELFCLASS32)
{
printf("%#x\n", (unsigned int)e_entry);
}
else
{
printf("%#lx\n", e_entry);
}}


/**
* main - shows content contained at the start of the ELF header.
* @argc: The number of arguments supplied to the program.
* @argv: An [] of pointers to the arguments.
* Return: 0 if progam successful.
* Description: If the file fails or is not an ELF File error 98.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int o, r;
o = open(argv[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(o);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
while ((r = read(o, header, sizeof(Elf64_Ehdr))) > 0)
{
if (header->e_ident[EI_MAG0] != ELFMAG0 ||
header->e_ident[EI_MAG1] != ELFMAG1 ||
header->e_ident[EI_MAG2] != ELFMAG2 ||
header->e_ident[EI_MAG3] != ELFMAG3)
{
free(header);
close_elf(o);
dprintf(STDERR_FILENO, "Error: `%s` is not an ELF file\n", argv[1]);
exit(98);
}
if (header->e_ident[EI_CLASS] != ELFCLASS64)
{
free(header);
close_elf(o);
dprintf(STDERR_FILENO, "Error: `%s` is not a 64-bit ELF file\n", argv[1]);
exit(98);
}
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);
}
if (r == -1)
{
free(header);
close_elf(o);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
free(header);
close_elf(o);
return (0);
}
