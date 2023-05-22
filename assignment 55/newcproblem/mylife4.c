#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char ch;
    FILE *fp;
    fp = fopen("mylife4.txt", "r");
    if (fp == NULL)
        printf("file not found");
    ch = fgetc(fp);
    while (feof(fp) == 0)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    getch();
}