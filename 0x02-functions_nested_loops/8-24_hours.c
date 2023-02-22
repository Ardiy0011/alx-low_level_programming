#include "main.h"

void jack_bauer(void);

int main()
{
jack_bauer();
return 0;
}
void jack_bauer(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++) {
putchar((hour / 10) + '0');   // print tens digit of hour
putchar((hour % 10) + '0');   // print ones digit of hour
putchar(':');
putchar((minute / 10) + '0'); // print tens digit of minute
            putchar((minute % 10) + '0'); // print ones digit of minute
            putchar('\n');               // print newline character
        }
    }
}
