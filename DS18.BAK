#include<iostream.h>
#include<conio.h>
struct node
{
 int data;
 node *left;
 node *right;
};
node *root;
node *parent=NULL;
node *ptr=NULL;

node* insert(node *temp,int x)
{
 if(temp==NULL)
 {
  temp=new node;
  temp->data=x;
  temp->right=NULL;
  temp->left=NULL;
 }
 else if(x<temp->data)
  temp->left=insert(temp->left,x);
 else if(x>temp->data)
  temp->right=insert(temp->right,x);
  return temp;
}

node* search(node *temp,int x)
{
 if(temp==NULL||temp->data==x)
  return temp;
 else if(x<temp->data)
 temp=search(temp->left,x);
 else
 temp=search(temp->right,x);
 return temp;
}

node* search_parent(node *temp,int x)
{
 if(temp==NULL||temp->data==x)
  return parent;
 else if(x<temp->data)
 {
  parent=temp;
  temp=search_parent(temp->left,x);
 }
 else
 {
  parent=temp;
  temp=search_parent(temp->right,x);
 }
 return parent;
}

node *findsucc(node *ptr)
{
 node *succptr=ptr->right;
 while(succptr->left!=NULL)
  succptr=succptr->left;
 return succptr;
}

node* delete_bst(node *root,int x)
{
 ptr=search(root,x);
 parent=search_parent(root,x);
 if(ptr==NULL)
 cout<<"Error\n";
 else if(ptr->left==NULL&&ptr->right==NULL)
 {
  if(parent->right==ptr)
   parent->right=NULL;
  else if(parent->left==ptr)
   parent->left=NULL;
  if(ptr==root)
   root=NULL;
  delete(ptr);
 }
 else if(ptr->left!=NULL&&ptr->right==NULL)
 {
  if(ptr==root)
   root=root->left;
  if(parent->right==ptr)
   parent->right=ptr->left;
  else if(parent->left==ptr)
   parent->left=ptr->left;
  delete(ptr);
 }
 else if(ptr->left==NULL&&ptr->right!=NULL)
 {
  if(ptr==root)
   root=root->right;
  if(parent->right==ptr)
   parent->right=ptr->right;
  else if(parent->left==ptr)
   parent->left=ptr->right;
  delete(ptr);
 }
 else if(ptr->left!=NULL&&ptr->right!=NULL)
 {
  node *succptr=findsucc(ptr);
  ptr->data=succptr->data;
  succptr=delete_bst(succptr,succptr->data);
 }
 return root;
}

void inorder(node *root)
{
 node *t;
 t=root;
 if(t==NULL)
 return;
 inorder(t->left);
 cout<<t->data<<" ";
 inorder(t->right);
}

void main()
{
  clrscr();
 int a,x,x1;
 char ch,chh;
 node *t;
 cout<<"Let's make a tree\n";
 do
   {
    cout<<"Enter the data\n";
    cin>>x;
    root=insert(root,x);
    cout<<"Do you want to enter more ??\n";
    cin>>chh;
   }while(chh=='y'||chh=='Y');
 do
 {
  cout<<"Enter 1 if you want to search a node\n";
  cout<<"Enter 2 if you want to insert one node\n";
  cout<<"Enter 3 if you want to delete a node\n";
  cin>>a;
  if(a==1)
  {
   cout<<"Enter the data you want to search\n";
   cin>>x1;
   t=search(root,x1);
   if(t!=NULL)
   {
    cout<<"Node found..!!\n";
    cout<<t->data<<endl;
   }
   else
   cout<<"Node not found.\n";
  }
  else if(a==2)
  {
   cout<<"Enter the data you want to insert\n";
   cin>>x1;
   root=insert(root,x1);
   cout<<"The tree after (inorder)traversal is:\n";
   inorder(root);
  }
  else if(a==3)
  {
   cout<<"Enter the node you want to delete: ";
   cin>>x1;
   root=delete_bst(root,x1);
   cout<<"The tree after (inorder)traversal is:\n";
   inorder(root);
  }
  else
   cout<<"Wrong choice!!\n";
  cout<<"\nDo you want to perform more operations?";
  cin>>ch;
 }while(ch=='y'||ch=='Y');
getch();
}