#include<iostream.h>
#include<conio.h>
void swap(int &i,int &j)
{
 int t=i;
 i=j;
 j=t;
}
void bubble_sort(int A[],int n)
{
 int i=1,swapped;
 do
 {
  swapped=0;
  for(int j=0;j<n-i;j++)
  {
   if(A[j+1]<A[j])
   {
    swap(A[j],A[j+1]);
    swapped=1;
   }
  }
  i++;
 }while(swapped==1);
}
int pivot_list(int A[],int first,int last)
{
 int pv=A[first];
 int pp=first;
 for(int i=first+1;i<=last;i++)
 {
  if(A[i]<pv)
  {
   pp++;
   swap(A[pp],A[i]);
  }
 }
 swap(A[first],A[pp]);
 return pp;
}
int* quick_sort(int A[],int first,int last)
{
 int pivot;
 if(first<last)
 {
  pivot=pivot_list(A,first,last);
  quick_sort(A,first,pivot-1);
  quick_sort(A,pivot+1,last);
 }
  return A;
}
void max_heapify(int A[],int i,int hs)
{
 int lar;
 int l=2*i+1;
 int r=2*i+2;
 if(l<hs&&A[l]>A[i])
  lar=l;
 else
  lar=i;
 if(r<hs&&A[r]>A[lar])
  lar=r;
 if(lar!=i)
 {
  swap(A[i],A[lar]);
  max_heapify(A,lar,hs);
 }
}
void build_maxheap(int A[],int n)
{
 int hs=n;
 for(int i=n/2;i>=0;i--)
 {
  max_heapify(A,i,hs);
 }
}
void heap_sort(int A[],int hs)
{
 build_maxheap(A,hs);
 for(int i=hs-1;i>=1;i--)
  {
   swap(A[0],A[i]);
   hs--;
   max_heapify(A,0,hs);
  }
}

void insertion_sort(int A[],int n)
{
 int key,i,j;
 for(j=1;j<n;j++)
 {
  key=A[j];
  i=j-1;
  while(i>=0&&A[i]>key)
  {
   A[i+1]=A[i];
   i--;
  }
  A[i+1]=key;
 }
}

void merge(int A[],int s1,int e1,int s2,int e2)
{
 int i=0,j,fs=s1,fe=e2,res[20];
 while(s1<=e1&&s2<=e2)
 {
  if(A[s1]<A[s2])
  {
   res[i]=A[s1];
   i++;
   s1++;
  }
  else
  {
   res[i]=A[s2];
   i++;
   s2++;
  }
 }
 if(s2>e2)
 {
  for(j=s1;j<=e1;j++)
  {
   res[i]=A[j];
   i++;
  }
 }
 if(s1>e1)
 {
  for(j=s2;j<=e2;j++)
  {
   res[i]=A[j];
   i++;
  }
 }
 int k=0;
 for(j=fs;j<=fe;j++)
 {
  A[j]=res[k];
  k++;
 }
}

int *merge_sort(int A[],int first,int last)
{
 if(first<last)
 {
  int mid=(first+last)/2;
  merge_sort(A,first,mid);
  merge_sort(A,mid+1,last);
  merge(A,first,mid,mid+1,last);
 }
 return A;
}

void traversal(int A[],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<A[i]<<" ";
 }
 cout<<endl;
}

void main()
{
 clrscr();
 int i,n,ch,A[20];
 char choice;
 do
 {
  cout<<"Enter the number of terms in the array\n";
  cin>>n;
  cout<<"Enter the values in the array\n";
  for(i=0;i<n;i++)
   cin>>A[i];
  cout<<"Enter your choice for sorting\n";
  cout<<"1.Bubble sort\n";
  cout<<"2.Quick sort\n";
  cout<<"3.Heap sort\n";
  cout<<"4.Insertion sort\n";
  cout<<"5.Merge sort\n";
  cin>>ch;
  if(ch==1)
  {
   bubble_sort(A,n);
   traversal(A,n);
  }
  else if(ch==2)
  {
   int f=0;
   int l=n-1;
   quick_sort(A,f,l);
   traversal(A,n);
  }
  else if(ch==3)
  {
   heap_sort(A,n);
   traversal(A,n);
  }
  else if(ch==4)
  {
   insertion_sort(A,n);
   traversal(A,n);
  }
  else if(ch==5)
  {
   merge_sort(A,0,n-1);
   traversal(A,n);
  }
  else
   cout<<"Wrong choice!!!\n";
  cout<<"Do you want to perform again.\n";
  cin>>choice;
 }while(choice=='y'||choice=='Y');
getch();
}