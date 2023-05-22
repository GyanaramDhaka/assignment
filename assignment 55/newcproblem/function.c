#include <stdio.h>
#include <conio.h>
void uppar_case(char );
int main()
{
    char a;
    printf("enter a alphabat");
    scanf("%c", &a);
    uppar_case(a);
}
void uppar_case(char bull)
{
    int i;

    i =  bull- 32;

    printf("%c", i);
}