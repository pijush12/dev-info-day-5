/* Write a c program to find the sum of the series
1!/1+2!/2+3!/3+4!/4+5!/5 -------------------------*/

#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int i,c,sum=0;
for(i=1;i<=5;i++)
{
c=fact(i);
sum=sum+(c/i);
}
printf("\nThe sum of the series is: %d",sum);
getch();
}
int fact(int a)
{
int i=0,factorial=1;
for(i=1;i<=a;i++)
{
factorial*=i;
}
return factorial;
}