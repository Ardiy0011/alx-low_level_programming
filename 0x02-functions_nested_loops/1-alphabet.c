#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints alphabet in lowecase
 */
void print_alphabet() {
    char c = 'a';
    while (c <= 'z') {
        putchar(c++);
    }
    putchar('\n');
}
