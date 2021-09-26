#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s\t%s\n", "F", "C");
    while (fahr <= upper) 
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%6.1f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    getchar();
}