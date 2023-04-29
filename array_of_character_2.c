#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &c[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", c[i]);
    }

    int a[20];
    printf("The Memory Size for the Array is : %d & The Size of the array is  : %d", sizeof(a),sizeof(a)/sizeof(int));

    return 0;
}