/* Write a c program to swap two numbers using function
----------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
int a,b;
printf("Enter the 1st number: ");
scanf("%d",&a);
printf("\nEnter the 2nd number: ");
scanf("%d",&b);
printf("\nNow the 1st number is %d and 2nd number is %d",a,b);
swap(a,b);
getch();
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\nAfter swap the 1st number is %d and 2nd number is %d",x,y);
}