#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    char *d;
    int b;
    int c;

public:
    student( char *m,int y, int p)
    {
        d = m;
        b = y;
        c = p;
    }
    void display()
    {
        cout << "student name  =" << d << endl;
        
        cout << "student class  =" << b << endl;
        cout << "student  enrr. no   =" << c << endl;
    }
    ~student()
    {
       cout<<" "<<"visit again"<<endl;
    }
};
int main()
{
    student s1("Rohitprajapat",12, 2);
    s1.display();
    return 0;
}