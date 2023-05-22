#include <iostream>
#include <conio.h>
using namespace std;
class time
{
private:
   int sec, min, hour;

public:
   void setdata(int x, int y, int z)
   {
      sec = x % 60;
      min = (y + x / 60) % 60;
      hour = z + ((y + x / 60)) / 60;
   }
   void displaydata()
   {
      cout << "time is =" << hour << "hr"
           << " " << min << "min"
           << " " << sec << "sec" << endl;
   }
};
int main()
{
   time t1;
   int x, y, z;
   cout << "enter sec";
   cin >> x;
   cout << "enter min";
   cin >> y;
   cout << "enter hour";
   cin >> z;
   t1.setdata(x, y, z);
   t1.displaydata();
   getch();
}