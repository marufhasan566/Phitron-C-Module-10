#include <stdio.h>
int main()
{
    // char c[15] = {'M', 'a', 'r', 'u', 'f'};
    char c[] = "Maruf Hasan\0";
    // for (int i = 0; i < 15; i++)
    // {
    //     printf("%c ", c[i]);
    // }
    printf("%s\n", c);
    printf("%d", sizeof(c));
    return 0;
}