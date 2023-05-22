#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char password[10];
    cout << "enter your password " << endl;
    gets(password);
    try
    {

        for (int i = 0; i < strlen(password); i++)
        {
            if (isdigit(password[i]) == 1)
            {
                for (int j = 0; j < strlen(password); j++)
                {
                    if (password[j] >= 65 && password[j] <= 90)
                    {
                        if (strlen(password) > 7)
                            throw "possible";
                    }
                }
            }
        }

        cout << "this can't be a password" << endl;
    }
    catch (...)
    {
        cout << "this can be your password " << endl;
    }
    cout<<"hii gyanaram dhaka"<<endl;
    return 0;
}