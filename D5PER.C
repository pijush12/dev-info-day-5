/* Write a c program to check perfect or not using function
--------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
int perfect(int);
void main()
{
int a,c;
printf("Enter the number: ");
scanf("%d",&a);
c=perfect(a);
if(c==1)
printf("\nThe number is a perfect number");
else
printf("\nThe number is not a perfect number");
getch();
}
int perfect(int n)
{
int i,r,sum=0;
for(i=1;i<=(n/2);i++)
{
r=n%i;
if(r==0)
sum+=i;
}
if(sum==n)
return 1;
else
return 0;
}