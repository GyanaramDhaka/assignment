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
    void searchnumber(int search)
    {
        if(this==NULL)
        {
            return;
        }
        else if(this->data==search)
        {
        cout<<"data found "<<endl;
        return ;
        }
       
        if(this->data>search)
        this->left->searchnumber(search);
        else if(this->data < search)
        this->right->searchnumber(search);
       
    }
    void  minimum()
    {
        Tree*temp=this;
        if(this==NULL)
        {
            cout<<"tree is empty"<<endl;
           
        }
        else
        {
           while(temp->left!=NULL)
            {
               temp=temp->left;
            }
            cout<<"am i a chutiya"<<endl;
            cout<<"mimimum data is =";
            cout<<temp->data;
        }
        
    }
    int height()
    {
        int lh,rh;
        if(this==NULL)
        {
            return 0;
        }
        lh=this->left->height();
        rh=this->right->height();
        if(lh>=rh)
        return (lh+1);
        if(lh<=rh)
        return (rh+1);
    }
    int diaoftree()
    {
        int lh,rh;
        if(this==NULL)
        {
            cout<<"tree is empty";
            return 0;
        }
        else 
        {
            lh=this->left->height();
            rh=this->right->height();
            
        }
        return (lh+rh+1);
    }
    
};
int main()
{
    int level;
    int search;
    Tree *root,*temp;
    int diameter;
   root= root->insert(5);
   root= root->insert(4);
   root= root->insert(8);
   root=root->insert(2);
   root=root->insert(3);
   root=root->insert(7);
   root=root->insert(6);
   root=root->insert(9);
   //cout<<"enter level that you want to print"<<endl;
   //cin>>level;
   //root->printlevelorder(level);
   cout<<endl;
   // root->inorder();
    //cout<<"enter number that you want to search"<<endl;
    //cin>>search;
    //root->searchnumber(search);
    //root->minimum();
    diameter=root->diaoftree();
    cout<<"diameter of tree is = "<<diameter<<endl;
    return 0;
}