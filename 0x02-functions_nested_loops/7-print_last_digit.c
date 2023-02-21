#include "main.h"

int get_last_digit(int num) {
    int last_digit = num % 10;  // get the remainder of num divided by 10
    return last_digit;
}

int main() {
    int test_num1 = 12345;
    int test_num2 = -987654321;
    int test_num3 = 0;
    printf("The last digit of %d is %d\n", test_num1, get_last_digit(test_num1));
    printf("The last digit of %d is %d\n", test_num2, get_last_digit(test_num2));
    printf("The last digit of %d is %d\n", test_num3, get_last_digit(test_num3));
    return 0;
}
