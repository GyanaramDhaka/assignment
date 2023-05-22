#include <stdio.h>
#include <conio.h>
int main()
{
    char s1[25] = "gyanaram dhaka";
    int l = strlen(s1);
    char *ps;
    ps = (char *)malloc((l) * sizeof(char));
    strcpy(ps, s1);
    printf("string in dynamic array is%s ", ps);
    free(ps);
    getch();
}