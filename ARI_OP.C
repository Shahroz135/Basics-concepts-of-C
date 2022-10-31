// Program to get values from user and perform arthimatic operation on them
#include<stdio.h>
#include<conio.h>
void main()
{
int num1, num2, sum, sub, mul, div, mod;
clrscr();
printf("Enter first number=");
scanf("%d",&num1);
printf("Enter second number=");
scanf("%d",&num2);
sum=num1+num2;
sub=num1-num2;
mul=num1*num2;
div=num1/num2;
mod=num1%num2;
printf("\nAddition of both numbers=%d",sum);
printf("\nSubtraction of both numbers=%d",sub);
printf("\nMultiplication  of both numbers=%d",mul);
printf("\ndivision of both numbers =%d",div);
printf("\nmod of both numbers=%d",mod);
getch();
}