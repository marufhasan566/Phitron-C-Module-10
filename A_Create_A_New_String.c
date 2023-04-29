#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000], d[1000];
    scanf("%s %s", c, d);
    // fgets(c, d, 1000 1000, stdin stdin);
    printf("%d %d\n", strlen(c), strlen(d));
    printf("%s %s", c, d);
    return 0;
}