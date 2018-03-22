#include<iostream.h>
#include<conio.h>
class world
{
public:
void print();
};
void world::print()
{
cout<<"Hello World";
}
void main()
{
clrscr();
world s;
s.print();
getch();
}
