#ifndef ELF_H
#define ELF_H

#define EI_MAG0 0
#define EI_MAG1 1
#define EI_MAG2 2
#define EI_MAG3 3
#define EI_CLASS 4
#define EI_DATA 5
#define EI_VERSION 6  
#define EI_OSABI 7
#define EI_ABIVERSION 8
#define EI_PAD 9
#define EI_NIDENT 16

#define ELFCLASSNONE    0
#define ELFCLASS32      1
#define ELFCLASS64      2

#define ELFDATA2LSB     1
#define ELFDATA2MSB     2

#define ELFOSABI_NONE      0
#define ELFOSABI_HPUX      1
#define ELFOSABI_NETBSD    2
#define ELFOSABI_LINUX     3
#define ELFOSABI_SOLARIS   6
#define ELFOSABI_IRIX      8
#define ELFOSABI_FREEBSD   9
#define ELFOSABI_TRU64     10
#define ELFOSABI_ARM       97
#define ELFOSABI_STANDALONE 255

#define ET_NONE         0
#define ET_REL          1
#define ET_EXEC         2
#define ET_DYN          3
#define ET_CORE         4

#define EM_NONE         0
#define EM_M32          1
#define EM_SPARC        2
#define EM_386          3
#define EM_68K          4
#define EM_88K          5
#define EM_860          7
#define EM_MIPS         8
#define EM_S370          9
#define EM_MIPS_RS3_LE   10
#define EM_PARISC       15
#define EM_VPP500       17
#define EM_SPARC32PLUS  18
#define EM_960          19
#define EM_PPC          20
#define EM_PPC64        21
#define EM_S390         22
#define EM_V800         36
#define EM_FR20         37
#define EM_RH32         38
#define EM_RCE          39
#define EM_ARM          40
#define EM_SH           42
#define EM_SPARCV9      43
#define EM_TRICORE      44
#define EM_ARC          45
#define EM_H8_300       46
#define EM_H8_300H      47
#define EM_H8S          48
#define EM_H8_500       49
#define EM_IA_64        50
#define EM_MIPS_X       51
#define EM_COLDFIRE     52
#define EM_68HC12       53
#define EM_MMA          54
#define EM_PCP          55
#define EM_NCPU         56
#define EM_NDR1         57
#define EM_STARCORE     58
#define EM_ME16         59
#define EM_ST100        60
#define EM_TINYJ        61
#define EM_X86_64       62
#define EM_PDSP         63
#define EM_PDP10        64
#define EM_PDP11        65
#define EM_FX66         66
#define EM_ST9PLUS      67
#define EM_ST7          68
#define EM_68HC16       69
#define EM_68HC11       70
#define EM_68HC08       71


#define ELFOSABI_NONE        0
#define ELFOSABI_HPUX        1
#define ELFOSABI_NETBSD      2
#define ELFOSABI_LINUX       3
#define ELFOSABI_SOLARIS     6
#define ELFOSABI_IRIX        8
#define ELFOSABI_FREEBSD     9
#define ELFOSABI_TRU64       10
#define ELFOSABI_ARM         97
#define ELFOSABI_STANDALONE  255


#define EV_NONE     0
#define EV_CURRENT  1


#define EI_VERSION  1


#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

/* EI_CLASS - Class */
#define ELFCLASSNONE 0
#define ELFCLASS32 1
#define ELFCLASS64 2


#define ELFMAG0 0x7F
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'

#define ELFDATANONE 0
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

#define Elf64_Ehdr
#endif /* ELF_H */