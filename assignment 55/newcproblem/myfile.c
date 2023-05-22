#include <stdio.h>
#include <conio.h>
int main()
{
  char s[20] = "gyanaramismyfriend";
  int i;
  FILE *p;
  p = fopen("mylife4.txt", "w");
  fputs(s, p);
  fclose(p);
  getch();
}