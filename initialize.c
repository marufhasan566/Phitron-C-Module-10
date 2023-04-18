#include <stdio.h>
int main()
{
    char c[6] = {'M', 'a', 'r', 'u', 'f'}; // No guarantee to initialize a null character at the end array of character
    // char c[6] = "Maruf"; //Guarantee to initialize a null character at the end of the string
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", c[i]);
    // }
    printf("%s \n", c);
    printf("%d", sizeof(c));

    return 0;
}