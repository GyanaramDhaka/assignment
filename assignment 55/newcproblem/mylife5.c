#include <stdio.h>
#include <conio.h>
int main()
{
    char s[50];
    FILE *fp;
    int i;
    fp = fopen("mylife4.txt", "r+");
    if(fp==NULL)
    printf("file was not found ");
    printf("old string is :");
    while (fgets(s, 6, fp )!= NULL)
    {
        printf("%s", s);
    }
    printf("enter a new string ");
    gets(s);
    printf("new string is this:");
    fputs(s, fp);
    fclose(fp);
    getch();
}