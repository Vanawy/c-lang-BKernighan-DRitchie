#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    bool is_prev_char_space = false;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            if (!is_prev_char_space) {
                putchar(c);
            }
            is_prev_char_space = true;
        } else {
            putchar(c);
            is_prev_char_space = false;
        }
    }
}