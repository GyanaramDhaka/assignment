#include <iostream>
using namespace std;
class Tree
{
    public:
    int data;
    Tree *left;
    Tree *right;
    Tree(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
    Tree *insert(int value)
    {
        if(this==NULL)
        {
            return new Tree (value);
        }
        else if(this->data<value )
        {
            this->right=this->right->insert(value);
        }
        else if(this->data>value)
        {
            this->left=this->left->insert(value);
        }
        return this;
    }
    void inorder ()
    {
        if(this==NULL)
        {
            return ;
        }
        else 
        {
            this->left->inorder();
            cout<<this->data<<" ";
            
            this->right->inorder();
        }
    }
     void printlevelorder(int level)
    {
        if(this==NULL)
        {
            return ;
        }
        if(level==1)
        {
            cout<<this->data;
        
            
        }
        else if(level>1)
        {
            this->left->printlevelorder(level-1);
            this->right->printlevelorder(level-1);
        }
    }
    
};
int main()
{
    int level;
    Tree *root;
   root= root->insert(5);
   root= root->insert(4);
   root= root->insert(8);
   root=root->insert(2);
   root=root->insert(3);
   root=root->insert(7);
   root=root->insert(6);
   root=root->insert(9);
   cout<<"enter level that you want to print"<<endl;
   cin>>level;
   root->printlevelorder(level);
   cout<<endl;
    root->inorder();
    
    return 0;
}