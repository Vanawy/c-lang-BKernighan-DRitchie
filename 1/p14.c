#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -270;
    upper = 200;
    step = 20;

    celsius = lower;
    printf("%s\t%s\n", "C", "F");
    while (celsius <= upper) 
    {
        fahr = celsius / 5.0 * 9.0 + 32.0;
        printf("%6.1f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
    getchar();
}