#include "main.h"

void print_alphabet() {
    for (char c = 'a'; c <= 'z'; c++) {
        putchar(c);
    }
    putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}