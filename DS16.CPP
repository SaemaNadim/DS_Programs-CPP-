#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include"stack1.h"
void postfix_eval(char *e)
{
 int c=0,y,m,n,x1,*s;
 char x;
 strcat(e,"#");
 x=e[c++];
 while(x!='#')
 {
  if(x>='0'&&x<='9')
  {
   x1=x-'0';
   push(s,x1);
  }
  else
  {
   m=pop(s);
   n=pop(s);
   if(x=='+')
    y=n+m;
   else if(x=='-')
    y=n-m;
   else if(x=='*')
    y=n*m;
   else if(x=='/')
    y=n/m;
   else if(x=='^')
    y=pow(n,m);
   push(s,y);
  }
  x=e[c++];
 }
 int value=pop(s);
 cout<<"value:"<<value;
}
void main()
{
 clrscr();
 char *e;
 cout<<"Enter a postfix expression\n";
 gets(e);
 cout<<"After evaluation:\n";
 postfix_eval(e);
 getch();
}