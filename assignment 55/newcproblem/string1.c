#include <stdio.h>
#include <conio.h>
void next(char *);

int main()

{
    char a[3];
    printf("enter three alphabat ");
    gets(a);
    next(&a);
    getch();
}
void next(char *a)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%c", (*(a + i) + 3));
    }
}