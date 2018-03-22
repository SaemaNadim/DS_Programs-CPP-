#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[100],B[100],C[100],n,m,i,j,k;
cout<<"Enter the size of the first array : ";
cin>>n;
cout<<"\n Enter the elements of first array : ";
for(i=0;i<n;i++)
cin>>A[i];
cout<<"\n Enter the size of the second array : ";
cin>>m;
cout<<"\n Enter the elements of second array : ";
for(j=0;j<m;j++)
cin>>B[j];
if(A[0]<=A[n-1]&&B[0]<=B[m-1])
 {
  i=j=k=0;
  while(i<n&&j<m)
   {
    if(A[i]<B[j])
     {
      C[k]=A[i];
      i++;k++;
     }
    else
     {
      C[k]=B[j];
      j++;k++;
     }
   }
   if(i==n)
    {
     while(j<m)
      {
       C[k]=B[j];
       j++;k++;
      }
    }
   else if(j==m)
    {
     while(i<n)
      {
       C[k]=A[i];
       k++;i++;
      }
    }
  }
else if(A[0]>=A[n-1]&&B[0]>=B[m-1])
 {
  i=n-1;j=m-1;k=0;
  while(i>=0&&j>=0)
   {
    if(A[i]<B[j])
     {
      C[k]=A[i];
      i--;k++;
     }
    else
     {
      C[k]=B[j];
      j--;k++;
     }
   }
   if(i<0)
    {
     while(j>=0)
      {
       C[k]=B[j];
       j--;k++;
      }
    }
    else if(j<0)
    {
     while(i>=0)
      {
       C[k]=A[i];
       k++;i--;
      }
    }
  }
else if(A[0]<=A[n-1]&&B[0]>=B[m-1])
 {
  i=k=0;j=m-1;
  while(i<n&&j>=0)
   {
    if(A[i]<B[j])
     {
      C[k]=A[i];
      i++;k++;
     }
    else
     {
      C[k]=B[j];
      j--;k++;
     }
   }
   if(i==n)
    {
     while(j>=0)
      {
       C[k]=B[j];
       j--;k++;
      }
    }
    else if(j<0)
    {
     while(i<n)
      {
       C[k]=A[i];
       k++;i++;
      }
    }
  }
else if(A[0]>=A[n-1]&&B[0]<=B[m-1])
 {
  j=k=0;i=n-1;
  while(i>=0&&j<m)
   {
    if(A[i]<B[j])
     {
      C[k]=A[i];
      i--;k++;
     }
    else
     {
      C[k]=B[j];
      j++;k++;
     }
   }
   if(i<0)
    {
     while(j<m)
      {
       C[k]=B[j];
       j++;k++;
      }
    }
    else if(j==m)
    {
     while(i>=0)
      {
       C[k]=A[i];
       k++;i--;
      }
    }
  }
cout<<"The ascending order is : ";
for(k=0;k<m+n;k++)
cout<<C[k]<<" ";
cout<<"\nThe descending order is : ";
for(k=m+n-1;k>=0;k--)
cout<<C[k]<<" ";
getch();
}
