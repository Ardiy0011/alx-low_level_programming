#ifndef BINARY_H
#define BINARY_H
#include <stdio.h>
#include <stdlib.h>


void print_binary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
int get_endianness(void);

int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);

#endif /*BINARY_H*/
