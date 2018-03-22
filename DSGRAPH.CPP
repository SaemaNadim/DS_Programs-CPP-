#include<iostream.h>
#include<conio.h>
struct node
{
int key;
node*next;
};
node*t;
node*n;
node*b;
node*temp[10];
int count[10]={0,0,0,0,0,0,0,0,0,0};
int check [10];
int a[10];

node* header[10];
int front=0;
int rear=-1;
void enqueue(int z)
	{  if(rear==9)
	    cout<<"full\n";
	   rear=rear+1;
	   a[rear]=z;
	 }
int dequeue()
	{
	  if(front==rear+1)
	    cout<<"empty\n";
	  int f=a[front];
	  front=front+1;
	  return f;
	  }

void bfs_visit(int y)
	{
	   enqueue(y);
		 while(front!=rear+1)
		 {
		   int s=dequeue();
		    t=header[s];
			while(t!=NULL)
			{
				if(check[t->key]==0)
				 {
				    check[t->key]=1;
				    enqueue(t->key);
				  }
			  t=t->next;
			 }
		   check[s]=1;
		   cout<<s;
		 }
	}
void dfs_visit(int g)
	{
	   check[g]=1;
	   cout<<g<<" ";
	   b=header[g];
	   while(b!=NULL)
		{
		  if(check[b->key]==0)
		  {
		   dfs_visit(b->key);

		  }
		   b=b->next;
		}

	  }
void main()
{
int i,j,k,l,v;
char o;

cout<<"enter the total vertex\n";
cin>>v;
	do
	{
	  cout<<"enter the vertex u want to esbablish connection between\n";
	  cin>>i>>j;
	 // set_edge(header[i],j,i);
	  n=new node;
	  n->key=j;
	  n->next=NULL;
		if(count[i]==0)
		{
		  header[i]=n;
		  temp[i]=header[i];
		  count[i]++;
		}
		else
		{
		  temp[i]->next=n;
		  temp[i]=temp[i]->next;
		  count[i]++;
		}
	  cout<<"do u want to enter more\n";
	  cin>>o;
	 }while(o=='y');
   for(k=0;k<v;k++)
	{
	 check[k]=0;
	}
  /* for(k=0;k<v;k++)
	{
	 if(check[k]==0)
	 bfs_visit(k);
	}*/
      for(k=0;k<v;k++)
	{
	 if(check[k]==0)
	  dfs_visit(k);
	}
       /*	for(k=0;k<v;k++)
	{
	  node*h=header[k];
	  while(h!=NULL)
	  {
	   cout<<h->key<<"  ";
	   h=h->next;
	   }
	 }*/
     getch();
     }





