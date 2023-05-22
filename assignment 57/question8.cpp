#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *pri;
    Node()
    {
        data = 0;
        next = NULL;
        pri = NULL;
    }
};
Node *head = NULL;
Node *t = NULL;
Node *rear = NULL;
Node *y = NULL;
class Doublylinklist
{
public:
    void insertion(int value)
    {
        t = head;
        Node *temp = new Node;
        temp->data = value;
        if (rear == NULL)
        {
            rear = temp;
            head = temp;
        }
        else
        {
            rear->next = temp;
            temp->pri = rear;
            rear = rear->next;
            temp = NULL;
        }
    }
    void print()
    {
        t = head;
        while (t != NULL)
        {
            cout << t->data << "->";
            t = t->next;
        }
    }
    void reverse ()
    {
        int a[5];
        int i=0;
        t=head;
        Node *temp;
        temp=head;
        while(t->next!=NULL)
        {
           a[i]=t->data;
           t=t->next;
           i++;
        }
        cout<<"linkilist first and last element are "<<endl;
        cout<<temp->data<<" "<<t->data; 
        while(temp!=NULL)
        {
           temp->data=a[i];
           i--;
           temp=temp->next;
        }
       
    }
};
int main()
{
    Doublylinklist sita;
    int x;
    int y;
    cout<<"enter number that much you want to insert "<<endl;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cout<<"enter "<<i+1<<"element "<<endl;
        cin>>y;
        sita.insertion(y);
    }
    sita.print();
    cout<<endl;
    sita.reverse();
    sita.print();
    return 0;
}