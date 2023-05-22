#include <iostream>
using namespace std;
class Matrix
{
  private:
  int a[3][3];
  public:
  void setvalue()
  {
    cout<<"enter matrix number "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cin>>a[i][j];
    }
  }
  void showdata()
  {
    for(int i=0;i<3;i++)
    {
        cout<<a[i][0]<<"   "<<a[i][1]<<"   "<<a[i][2]<<endl;
    }
  }
  friend Matrix operator-(Matrix );
  
};
Matrix operator-(Matrix m)
{
    Matrix x;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            x.a[i][j]=-(m.a[i][j]);
            
        }
    }
    return x;
}
int main()
{
    Matrix m1;
    m1.setvalue();
    cout<<"matrix is :"<<endl;
    m1.showdata();
    m1=-m1;
    cout<<"after calling - operator "<<endl;
    cout<<"matrix is :"<<endl;
    m1.showdata();
    return 0;

}