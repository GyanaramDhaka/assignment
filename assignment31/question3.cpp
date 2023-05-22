#include <iostream>
using namespace std;
class sub
{
    private:
     float math;
     float physics;
     float chemistry;
     public:
    float getmathmarks()
    {
        cout<<"enter math marks "<<endl;
        cin>>math;
        return math;
    }
    float getphysicsmarks()
    {
        cout<<"enter physics marks "<<endl;
        cin>>physics;
        return physics;

    }
    float getchemistrymarks()
    {
        cout<<"enter chemistry marks"<<endl;
        cin>>chemistry;
        return chemistry;
    }
};
class marks:public sub
{
     private:
     float total;
     public:
     float totalmarks()
     {
        total=getmathmarks()+getphysicsmarks()+getchemistrymarks();
        return total;

     }
};
class pre:public marks
{
    float percentage;
    public:
    float percentageofstudent()
    {
        percentage=(totalmarks()*100)/300;
        return percentage;
    }
};
int main()
{
     char a[20];
     pre *ptr;
     ptr=new pre;
     cout<<" enter student name "<<endl;
     cin>>a;
     cout<<ptr->percentageofstudent()<<"%"<<endl;;
     cout<<"congroculation bro "<<endl;

     return 0;
}