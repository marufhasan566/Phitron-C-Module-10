#include <stdio.h>
#include <string.h>
int main()
{
    char c[50];
    // gets(c);
    fgets(c, 25, stdin);
    c[10] = '\0';
    printf("%s", c);
    return 0;
}