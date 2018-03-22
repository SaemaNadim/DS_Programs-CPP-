#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int a=0,b=0,c=0,d=0,e=0,k;
clrscr();
do
{
printf("Enter the grade\n");
scanf("%c",&ch);
switch(ch)
{
case'A':
case'a':
++a;
break;
case'B':
case'b':
++b;
break;
case'C':
case'c':
++c;
break;
case'D':
case'd':
++d;
break;
case'E':
case'e':
++e;
break;
default:
printf("wrong grades");
}
printf("do you want to enter more?\n");
scanf("%d",&k);
//getchar();
}while(k<9);
printf("A's=%d",a);
printf("B's=%d",b);
printf("C's=%d",c);
printf("D's=%d",d);
printf("E's=%e",e);
getch();
}


