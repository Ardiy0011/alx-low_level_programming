#include "main.h"

int _isalpha(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;  // c is a lowercase letter
    } else if (c >= 'A' && c <= 'Z') {
        return 1;  // c is an uppercase letter
    } else {
        return 0;  // c is not a letter
    }
}

int main() {
    char test_char1 = 'g';
    char test_char2 = 'T';
    char test_char3 = '9';
    if (_islower(test_char1)) {
        printf("%c is a lowercase letter\n", test_char1);
    } else {
        printf("%c is not a lowercase letter\n", test_char1);
    }
    if (_islower(test_char2)) {
        printf("%c is a lowercase letter\n", test_char2);
    } else {
        printf("%c is not a lowercase letter\n", test_char2);
    }
    if (_islower(test_char3)) {
        printf("%c is a lowercase letter\n", test_char3);
    } else {
        printf("%c is not a lowercase letter\n", test_char3);
    }
    return 0;
}
