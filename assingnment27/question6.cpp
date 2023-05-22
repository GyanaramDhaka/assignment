#include <iostream>
#include <cstring>
using namespace std;
class Cstring
{
private:
    char *str;
    int size;

public:
    Cstring(char *s)
    {
        size = strlen(s);
        str = (char *)malloc(size + 1);
        strcpy(str, s);
    }
    Cstring()
    {
        str = (char *)malloc(sizeof(char));
        size = strlen(str);
    }
    void operator=(char *s)
    {
        if (str != NULL)
        {
            free(str);
        }
        size = strlen(s);
        str = (char *)malloc(size + 1);
        strcpy(str, s);
    }
    void display()
    {
        puts(str);
    }
    Cstring(Cstring &s)
    {
        size = s.size;
        str = (char *)malloc(size + 1);
        strcpy(str, s.str);
    }
    Cstring operator+(Cstring s)
    {
        Cstring s5;
        if (s5.str != NULL)
        {
            free(s5.str);
        }
        s5.str = (char *)malloc(size + 1);
        strcpy(s5.str, str);
        strcat(s5.str, s.str);
        return s5;
    }
   
};
int main()
{
    Cstring s1("gyanaram ");
    Cstring s2("dhaka");
    Cstring s3;
    s3 = s1 + s2;

    s2 = "what is your name";

    s2.display();
    s1.display();
    s2 = "what";
    s2.display();
    s3.display();
    return 0;
}