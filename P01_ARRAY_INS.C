#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,p,s;
clrscr();
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter elements of array: \n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("Enter the position to be inserted\n");
scanf("%d",&p);
printf("Enter the element");
scanf("%d",&s);
for(i=n-1;i>=p-1;i--)
	a[i+1]=a[i];
	a[p-1]=s;
printf("array\n");
for(i=0;i<n+1;i++)
	printf("%d ",a[i]);
getch();
}


