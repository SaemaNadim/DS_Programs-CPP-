#include<iostream.h>
#include<conio.h>
struct NODE
{
int data;
NODE *next;
};
NODE *TOP;
void push(int x)
{
  NODE *temp;
  temp=new NODE;
  temp->data=x;
  temp->next=TOP;
  TOP=temp;
}
void pop()
{
  NODE *temp;
  int x;
  if(TOP==NULL)
    cout<<"Stack is empty.\n";
  else
  {
    temp=TOP;
    x=temp->data;
    TOP=TOP->next;
    delete temp;
    cout<<"The element which is popped is : "<<x<<"\n";
  }
}
void show()
{
 NODE *temp;
 if(TOP==NULL)
  cout<<"Empty stack!!!!!!\n";
 else
   {
     temp=TOP;
     cout<<"The updated stack is :";
     while(temp!=NULL)
     {
       cout<<endl<<temp->data;
       temp=temp->next;
     }
     cout<<endl;
   }
}
void main()
{
 clrscr();
 int ch,x;
 char c;
 do
 {
 cout<<"Enter 1 to display the stack\n";
 cout<<"Enter 2 if you want to push the elements in the stack\n";
 cout<<"Enter 3 if you want to pop the elements from the stack\n";
 cin>>ch;
 if(ch==1)
 {
  show();
 }
 else if(ch==2)
 {
   cout<<"Enter the element you want to push: ";
   cin>>x;
   push(x);
   show();
 }
 else if(ch==3)
 {
    pop();
    show();
 }
 else
  cout<<"Wrong choice!!!\n";
 cout<<"Do you want to perform more operations?? ";
 cin>>c;
} while(c=='y'||c=='Y');
 getch();
}
