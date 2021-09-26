#include <stdio.h>

#define UPPER 300
#define LOWER -270
#define STEP 20

int main()
{
    float fahr, celsius;
    printf("%s\t%s\n", "C", "F");
    for(celsius = UPPER; celsius >= LOWER; celsius -= STEP) {

        fahr = celsius / 5.0 * 9.0 + 32.0;
        printf("%6.1f\t%6.1f\n", celsius, fahr);
    }
    getchar();
}