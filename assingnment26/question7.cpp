#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int height;
    int breadth;
    int vol;

public:
    Box(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    void volume();
    void display()
    {
       cout<<"volume of v1 box "<<"  "<<vol;
    }
};
void Box::volume()
{
    vol = length * breadth * height;
}
int main()
{
    Box v1(9, 8, 7);
    v1.volume();
    v1.display();
    return 0;
}