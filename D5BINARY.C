/* Write a c program to convert decimal to binary using function
-----------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void decitobi(int);
void main()
{
int a,c;
printf("Enter the decimal number: ");
scanf("%d",&a);
decitobi(a);
getch();
}
void decitobi(int n)
{
int i=0,a[10];
while(n>=1)
{
a[i]=n%2;
n=n/2;
i++;
}
printf("\nIn Binary the number will be: ");
for(i=i-1;i>=0;i--)
printf("%d",a[i]);
}