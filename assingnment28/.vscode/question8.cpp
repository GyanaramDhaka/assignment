#include <iostream>
#include <istream>
using namespace std;
class Coordinate
{
private:
    int x, y, z;

public:
    Coordinate()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Coordinate(int a,int b ,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    friend istream& operator>>(istream&,Coordinate &);
    friend ostream& operator<<(ostream&,Coordinate );
    Coordinate  operator=(Coordinate &p )
    {
        Coordinate temp;
        temp.x=p.x;
        temp.y=p.y;
        temp.z=p.z;
        return temp;
    }
};
  
  ostream& operator <<(ostream &os,Coordinate p)
  {
    os<<"value of x is "<<p.x<<endl;
    os<<"value of y is "<<p.y<<endl;
    os<<"value of z is "<<p.z<<endl;
    return os;
  }
  istream& operator>>( istream &os,Coordinate &p)
{
    cout << "enter  three number" << endl;
    cin>>p.x;
    cin>>p.y;
    cin>>p.z;
    return os;
   
}
int main()
{
    Coordinate c1;
    cin >> c1;
    Coordinate c2(6,6,6);
    cout<<c1<<c2;
    Coordinate c3;
    c3=c2;
    cout<<c2;
    return 0;
}