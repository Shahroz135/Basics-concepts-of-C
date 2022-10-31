//Program to get values  of the two variables by using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
x=10;
y=15;
clrscr();
printf("Before swaping the values:\n");
printf("x=%d and y=%d",x,y);
z=x;
x=y;
y=z;
printf("\nAfter swaping the values:\n");
printf("x=%d and y=%d",x,y);
getch();
}