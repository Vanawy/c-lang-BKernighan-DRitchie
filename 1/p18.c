#include <stdio.h>

int main()
{
    double ns, nt, nl;
    ns = nt = nl = 0;
    
    char c;
    while((c = getchar()) != EOF)
    {
        if (c == ' ') ns++;
        else if (c == '\t') nt++;
        else if (c == '\n') nl++;
    }
    
    printf("Spaces: %.0f\n Tabs: %.0f\n Lines: %.0f\n", ns, nt, nl);
}