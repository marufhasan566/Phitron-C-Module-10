#include <stdio.h>
int main()
{
    char c[5];
    int size = sizeof(c);
    printf("%d %d", size, sizeof(int));
    return 0;
}