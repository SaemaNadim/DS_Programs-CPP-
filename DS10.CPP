#include<iostream.h>
#include<conio.h>
struct NODE
{
int data;
NODE *next;
};
NODE *list;
void push(int x)
{
  NODE *temp, *temp1;
  temp=new NODE;
  temp->data=x;
  temp->next=NULL;
  temp1=list;
  while(temp1->next!=list)
  { temp1=temp1->next;}
  temp1->next=temp;
  temp->next=list;
}

void traversal()
 {
  NODE *t;
  t=list;
  cout<<"\nlist after traversing is:\n";
  while(t->next!=list)
   {
     cout<<t->data<<"  ";
     t=t->next;
   }
  cout<<t->data;
  cout<<endl;
 }

void Insert_before(int x,int key)
 {
  NODE *prev,*temp,*temp1;
  prev=list;
  temp=new NODE;
  temp->data=x;
  temp->next=NULL;
  temp1=list;
  while(prev->next!=list)
  prev=prev->next;
  while(temp1->next!=list&&temp1->data!=key)
   {
     prev=temp1;
     temp1=temp1->next;
   }
  if(temp1->data==key)
   {
     temp->next=temp1;
     prev->next=temp;
     if(temp1==list)
      {
	list=temp;
      }
   }
  else
    cout<<"Error:key not found";
}
void Insert_after(int x,int key)
{
 NODE *temp,*temp1;
 temp1=list;
 temp=new NODE;
 temp->data=x;
 temp->next=NULL;
 while(temp1->next!=list&&temp1->data!=key)
 temp1=temp1->next;
 if(temp1->data==key)
  {
  temp->next=temp1->next;
  temp1->next=temp;
  }
  else
  cout<<"key not found";
}
void delete_node(int key)
{
 NODE *temp,*prev;
 temp=list;
 while(temp->next!=list&&temp->data!=key)
 {
  prev=temp;
  temp=temp->next;
 }
 if(temp->data==key)
  {
   prev->next=temp->next;
   if(temp==list)
   list=temp->next;
   delete temp;
  }
  else
   cout<<"key not found";
}
void main()
{
  clrscr();
  int x,ch;
  char c;
  list=new NODE;
  cout<<"Enter data in the first node\n";
  cin>>x;
  list->data=x;
  list->next=list;
  cout<<"Do you want to enter more??\ny or n\n";
  cin>>c;
  while(c=='y'||c=='Y')
   {
     cout<<"Enter values:\n";
     cin>>x;
     push(x);
     cout<<"more???\n";
     cin>>c;
   }
  do
   {
     cout<<"Enter 1 if you want to traverse the list.\n";
     cout<<"Enter 2 if you want to insert an element after a particular node.\n";
     cout<<"Enter 3 if you want to insert an element before a particular node.\n";
     cout<<"Enter 4 if you want to delete a particular node\n";
     cin>>ch;
     if(ch==1)
      {
	traversal();
      }
     else if(ch==2)
      {
	int key,x;
	cout<<"After which data do you want to enter?\n";
	cin>>key;
	cout<<"What do you want to enter?\n";
	cin>>x;
	Insert_after(x,key);
	traversal();
      }
     else if(ch==3)
      {
	int key,x;
	cout<<"Before which data do you want to enter?\n";
	cin>>key;
	cout<<"What do you want to enter?\n";
	cin>>x;
	Insert_before(x,key);
	traversal();
      }
     else if(ch==4)
      {
	int key;
	cout<<"Which data do you want to delete??\n";
	cin>>key;
	delete_node(key);
	traversal();
      }
     else
	cout<<"Wrong choice!!!\n";
	cout<<"Do you want to perform more operations???\n";
	cin>>c;
  }while(c=='y'||c=='Y');
  getch();
}
