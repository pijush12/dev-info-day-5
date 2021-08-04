/*Write a c program to check whether a number armstrong number or not*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,count=0,s,result=0,r,m;
printf("Enter a number: ");
scanf("%d",&n);
s=n;
m=n;
while(n!=0)
{
n=n/10;
count++;
}
while(s!=0)
{
r=s%10;
result=result+pow(r,count);
s=s/10;
}
if(result==m)
printf("\nThe number is strong number");
else
printf("\nThe number is not strong number");
getch();
}