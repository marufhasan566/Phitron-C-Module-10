#include <stdio.h>
#include <string.h>
int main()
{
    char c[30];
    // gets(c);
    fgets(c, 30, stdin);
    c[20] = '\0';
    printf("%s", c);
    return 0;
}