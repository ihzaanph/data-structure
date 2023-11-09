
#include<stdio.h>
#include<conio.h>
void main()
{
int a1[100],n,i,a2[100],m,k,a[100];
clrscr();
printf("enter size of 1st array\n");
scanf("%d",&n);
printf("enter elements of 1st array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a1[i]);
a[i]=a1[i];
}
k=i;
printf("enter size of 2nd array\n");
scanf("%d",&m);
printf("enter elements of 2nd array\n");
for(i=0;i<m;i++)
{
scanf("%d",&a2[i]);
a[k]=a2[i];
k++;
}
printf("merged array\n");
for(i=0;i<k;i++)
{
printf("%d",a[i]);
}
getch();
}
