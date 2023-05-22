#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    p = (int *)malloc(5 * sizeof(int));
    printf("enter two values ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }
    printf("enterd value are :");
    for (i = 0; i < 5; i++)
    {
        printf("%d", *(p + i));
    }
    free(p);
    getch();
}