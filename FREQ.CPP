#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[10],j,i,f,c[10],n;
 cout<<"Enter array size\n";
 cin>>n;
 cout<<"Enter array:";
 for(i=0;i<n;i++)
 {
 cin>>A[i];
 c[i]=0;
 }
 for(i=0;i<n;i++)
 {
  if(c[i]==0)
  {
   f=1;
   c[i]=1;
   for(j=i+1;j<n;j++)
   {
    if(A[i]==A[j])
    {
     f++;
     c[j]=1;
    }
   }
   cout<<"Frequency of "<<A[i]<<"="<<f<<endl;
  }
  }
  getch();
  }