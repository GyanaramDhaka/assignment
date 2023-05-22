#include <iostream> 
using namespace std;
class Time 
{
    private:
    int Hours ;
    int Minuts;
    int Seconds;
    public:
    friend istream& operator>>(istream &,Time& );
    friend ostream &operator <<(ostream &,Time);
    friend int operator==(Time,Time);
   
};
 int operator==(Time T1,Time T2)
    {
        if(T1.Hours==T2.Hours )
        {
            if(T1.Minuts ==T2.Minuts )
            {
                if(T1.Seconds==T2.Seconds)
                {
                    return 1;

                }
            }
        }
        else 
        return 0;
    }

ostream& operator<<(ostream&os,Time T)
{
    cout<<"Hours  :  "<<T.Hours<<endl;
    cout<<"Miunts :  "<<T.Minuts<<endl;
    cout<<"Seconds:  "<<T.Seconds<<endl;
    return os;
}
istream& operator>>(istream &os,Time &T)
{
   cout<<"enter hours :";
   os>>T.Hours;
   cout<<"enter minuts :";
   os>>T.Minuts;
   cout<<"enter seconds :";
   os>>T.Seconds;
   return os;
}
int main()
{
    Time T1;
    Time T2;
    cout<<"enter first time "<<endl;
    cout<<"_ _ _ _ _ _ _ _ _  _ _ _ "<<endl;
    cin>>T1;
    cout<<"first time "<<endl;
    cout<<T1;
    cout<<"enter second time "<<endl;
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    cin>>T2;
    cout<<"second time"<<endl;
    cout<<T2;
    if(T1==T2)
    { cout<<"both time are equal"<<endl;
    }
    else 
    {
        cout<<"both time are not equal"<<endl;
    }
}