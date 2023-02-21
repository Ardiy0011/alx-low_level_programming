#include "main.h"

void print_alphabet_x10() {
    for (char c = 'a'; c <= 'z'; c++) {
        putchar(c);
    }
    putchar('\n');
}

int main() {
    for (int i = 1; i <= 10; i++) {
        print_alphabet();
    }
    return 0;
}
