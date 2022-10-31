//Program to get square and cube of the number which is given by user
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("Enter any number=");
scanf("%d",&x);
printf("\nSquare of %d=%d",x,x*x);
printf("\nCube of %d=%d",x,x*x*x);
getch();
}