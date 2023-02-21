#include "main.h"

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;  // c is a lowercase letter
    } else {
        return 0;  // c is not a lowercase letter
    }
}

int main() {
    char test_char = 'g';
    if (_islower(test_char)) {
        printf("%c is a lowercase letter\n", test_char);
    } else {
        printf("%c is not a lowercase letter\n", test_char);
    }
    return 0;
}
