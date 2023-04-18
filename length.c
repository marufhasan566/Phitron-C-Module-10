#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%s", c);
    // int count = 0;
    int length = strlen(c);
    printf("%d", length);

    // Count Length Using While Loop
    //  int i = 0;
    //  while (c[i] != 0)
    //  {
    //      count++;
    //      i++;
    //  }

    // Count Length Using For Loop
    //  for (int i = 0; c[i] != 0; i++)
    //  {
    //      count++;
    //  }
    //  printf("%d", count);
    return 0;
}