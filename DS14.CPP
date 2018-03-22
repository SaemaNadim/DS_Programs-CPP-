#include<iostream.h>
#include<conio.h>
struct NODE
{
int data;
NODE *next;
};
NODE *front;
NODE *rear;
void enqueue(int item)
{
  NODE *temp;
  temp=new NODE;
  temp->data=item;
  temp->next=NULL;
  if(front==NULL)
   front=rear=temp;
  else
   {
    rear->next=temp;
    rear=rear->next;
   }
}
void dequeue()
{
  NODE *temp;
  int item;
  if(front==NULL&&rear==NULL)
   cout<<"Queue is already empty !!!\n";
  else if(front==rear)
   {
    temp=front;
    item=temp->data;
    front=rear=NULL;
    cout<<"The deleted item is:  "<<item<<"\n";
    delete temp;
   }
  else
   {
    temp=front;
    item=temp->data;
    front=front->next;
    cout<<"The deleted item is:  "<<item<<"\n";
    delete temp;
   }
}
void display()
{
 NODE *temp;
  if(front==NULL&&rear==NULL)
  cout<<"Empty queue!!!\n";
 else
  {
   temp=front;
   cout<<"The updated queue is :\n";
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
  cout<<endl;
  }
}
void main()
{
 clrscr();
 int item,ch;
 char c;
 do
 {
 cout<<"Enter 1 if you want to display the queue\n";
 cout<<"Enter 2 if you want to insert an element in the queue\n";
 cout<<"Enter 3 if you want to delete an element from the queue\n";
 cin>>ch;
 if(ch==1)
  {
    display();
  }
 else if(ch==2)
  {
   cout<<"Enter the element you want to insert:  ";
   cin>>item;
   enqueue(item);
   display();
  }
 else if(ch==3)
  {
   dequeue();
   display();
  }
 else
  cout<<"Wrong choice!!!\n";
 cout<<"Do you want to perform more operations???  ";
 cin>>c;
 cout<<endl;
}while(c=='y'||c=='Y');
getch();
}