#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[100][100],B[100][100],C[100][100],T[100][100],l,m,n,p,q,i,j,k;
cout<<"If the number of rows of both matrices and the number of columns of both matrices are same then they can be added or subtracted otherwise not.\n If the number of columns of the first matrix is equal to the number of rows of the second matrix then they can be multiplied otherwise not.\n No such condition exists for getting the transpose of the matrix.";
cout<<"\nEnter the number of rows for first matrix : ";
cin>>m;
cout<<"\nEnter the number of columns for first matrix : ";
cin>>n;
cout<<"\nEnter the elements of first matrix : ";
for(i=0;i<m;i++)

 for(j=0;j<n;j++)
 cin>>A[i][j];

cout<<"\nEnter the number of rows for second matrix : ";
cin>>p;
cout<<"\nEnter the number of columns for second matrix : ";
cin>>q;
cout<<"\nEnter the elements of second matrix : ";
for(i=0;i<p;i++)
{
 for(j=0;j<q;j++)
 cin>>B[i][j];
}
if(m==p&&n==q)
{
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    C[i][j]=A[i][j]+B[i][j];
   }
   cout<<"\nThe matrix after addition is : ";
  for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 cout<<C[i][j]<<" " ;
 cout<<endl;
}
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    C[i][j]=A[i][j]-B[i][j];
   }
   cout<<"\nThe matrix after subtraction is : ";
  for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 cout<<C[i][j]<<" " ;
 cout<<endl;
}
}
 else
 {
 cout<<"\nThe matrices cannot be added or subtracted";
 }
 if(n==p)
  {
  for(i=0;i<m;i++)
   {
    for(j=0;j<q;j++)
    {
    C[i][j]=0;
    for(k=0;k<n;k++)
    {
    C[i][j]=C[i][j]+A[i][k]*B[k][j];
   }
   }
   }
   cout<<"\nThe matrix after multiplication is : ";
  for(i=0;i<m;i++)
{
 for(j=0;j<q;j++)
 cout<<C[i][j]<<" " ;
 cout<<endl;
}
 }
 else
 {
 cout<<"\nThe matrices cannot be multiplied";
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 T[i][j]=A[j][i];
 }
 }
  cout<<"\nThe transpose of the first matrix is : ";
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 cout<<T[i][j]<<" ";
 }
 cout<<endl;
 }
  for(i=0;i<q;i++)
 {
 for(j=0;j<p;j++)
 {
 T[i][j]=B[j][i];
 }
 }
  cout<<"\nThe transpose of the second matrix is : ";
 for(i=0;i<q;i++)
 {
 for(j=0;j<p;j++)
 {
 cout<<T[i][j]<<" ";
 }
 cout<<endl;
 }
 getch();
 }








