#include <iostream>
using namespace std;
class Float 
{
     private:
     float data;
     public:
     Float()
     {
        cout<<"we are in constructor "<<endl;
        cout<<"enter a data on this data u can perform an operation"<<endl;
        cin>>data;
     }
     void operator +(float data)
     {
        this->data=this->data+data;
     }
     void operator -(float data)
     {
        this->data=this->data-data;
     }
     void operator *(float data)
     {
        this->data=this->data*data;
     }
     void operator /(float data)
     {
        this->data=this->data/data;
     }
     void display()
     {
        cout<<" data is "<<data<<endl;
     }
};
int main()
{
    cout<<"enter a data"<<endl;
    Float f;
    Float f1;
    f+5;
    f.display();
    f-5;
    f.display();
    f*5;
    f.display();
    f/5;
    f.display();
    return 0 ;
    
}
