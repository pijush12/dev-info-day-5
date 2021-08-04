/*Write a c program to get largest element of an array using function
---------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void large(int [],int);
void main()
{
int a[10],n,i;
printf("Enter the no of elements in array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
large(a,n);
getch();
}
void large(int b[],int n)
{
int largest,i;
largest=b[0];
for(i=1;i<n;i++)
{
if(b[i]>largest)
largest=b[i];
}
printf("\nThe largest element is: %d",largest);
}