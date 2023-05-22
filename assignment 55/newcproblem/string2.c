#include <stdio.h>
#include <conio.h>
int main()
{
    char a[5];
    int b[5]={0,0,0,0,0};
    int i;
    int j;
    printf("enter a string ");
    gets(a);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
             if(a[i]==a[j])
             b[i]++;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%c %d",a[i],b[i]);
    }
}