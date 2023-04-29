#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%s", c);
    int count = 0;
    int i = 0;
    while (c[i] != '\0')
    {
        count = count + 1;
        i++;
    }
    // for (int i = 0; c[i] != '\0'; i++)
    // {
    //     count = count + 1;
    // }
    printf("%d\n", count);
    printf("%d", strlen(c));
    return 0;
}