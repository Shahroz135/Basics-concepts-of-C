#include<stdio.h>
#include<conio.h>
void main()
{
int age, months, days;
clrscr();
printf("Enter your Age in years=",age);
scanf("%d",&age);
months=age*12;
days=age*365;
printf("\nyour age in months=%d",months);
printf("\nyour age in days=%d", days);
getch();
}