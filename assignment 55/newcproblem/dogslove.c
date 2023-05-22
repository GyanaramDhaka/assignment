#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    int vol, cons, spe, words, punc, i, l;
   
    printf("enter the statement \n");
    gets(s);
    l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vol++;
            else
                cons++;
        if (isspace(s[i]))
            spe++;
        if (ispunct(s[i]))
            punc++;
    }
    printf("in the statement");
    printf("total words  is %d\n ", spe + 1);
    printf("total vowel  is %d \n", vol);
    printf("totla constant  is %d \n", cons);
    printf("total special words  is %d \n", punc);
    printf("total space  is %d ", spe);
    getch();
    return 0;
}