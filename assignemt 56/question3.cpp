#include <iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node *next;
    Node ()
    {
        data=0;
        next=NULL;
    }
};
Node *head=NULL;
Node *t=NULL;
class linklist
{
    public:
    void insertation()
    {
        int value;
        int x;
        cout<<"enter number that much elements you want to insert";
        cout<<endl;
        cin>>value;
        for(int i=0;i<value;i++)   
        {
            Node *temp=new Node;
            cout<<"enter"<<i+1<<"element "<<endl;
            cin>>x;
            temp->data=x;
            if(head==NULL)
            {
                head=temp;
                t=temp;
            }
            else
            {
                t->next=temp;
                t=t->next;
            }
        }    
    }
    void printlinklist()
    {
        t=head;
        cout<<"element are in linklist"<<endl;
        while(t!=NULL)
        {
                cout<<t->data<<"->";
                t=t->next;
        }
    }
    void swappairwise()
    {
        t=head;
        int i=1;
        while(t->next!=NULL)
        {
            if(i%2!=0)
            {
               t->data=(t->data)+(t->next->data);
               t->next->data=(t->data)-(t->next->data);
               t->data=(t->data)-(t->next->data);
               t=t->next;
            }
            else 
            {
                t=t->next;
            }
            i++;
        }
    }
};
int main()
{
    linklist sita;
    sita.insertation();
    sita.printlinklist();
    sita.swappairwise();
    sita.printlinklist();
    return 0;
}