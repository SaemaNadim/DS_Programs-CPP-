#include<iostream.h>
#include<conio.h>
int front=0,rear=-1,n;
void enqueue(int q[],int item)
{
if(rear==n-1)
  cout<<"Queue is full!!!\n";
else
 {
  rear=rear+1;
  q[rear]=item;
 }
}
void dequeue(int q[])
{
 int item;
 if(front==rear+1)
  {
  cout<<"Queue is empty!!!\n";
  }
 else
  {
   item=q[front];
   front=front++;
   cout<<"The deleted item is :"<<item<<"\n";
  }
}
void display(int q[])
{
 if(front==rear+1)
  cout<<"Empty queue!!!";
 else
  {
   cout<<"The updated queue is :\n";
   for(int i=front;i<=rear;i++)
    cout<<q[i]<<" ";
  }
  cout<<endl;
}
void main()
{
 clrscr();
 int item,q[20],ch;
 char c;
 cout<<"Enter the number of elements in the queue:  ";
 cin>>n;
 do
 {
 cout<<"Enter 1 if you want to display the queue\n";
 cout<<"Enter 2 if you want to insert an element in the queue\n";
 cout<<"Enter 3 if you want to delete an element from the queue\n";
 cin>>ch;
 if(ch==1)
  {
    display(q);
  }
 else if(ch==2)
  {
   cout<<"Enter the element you want to insert:  ";
   cin>>item;
   enqueue(q,item);
   display(q);
  }
 else if(ch==3)
  {
   dequeue(q);
   display(q);
  }
 else
  cout<<"Wrong choice!!!\n";
 cout<<"Do you want to perform more operations???  ";
 cin>>c;
 cout<<endl;
}while(c=='y'||c=='Y');
getch();
}