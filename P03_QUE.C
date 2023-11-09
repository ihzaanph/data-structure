#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int front,rear,n,a,item,queue[20];
void main()
{
clrscr();

front=rear=-1;
printf("Enter the size of queue");
scanf("%d",&n);
do
{
printf("\n Enter your choice 1.push 2.pop 3.display 4.exit");
scanf("%d",&a);
switch(a)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nInvalid option");
break;
}
}
while(1);

}
void push()
{

if(rear==n-1)
{
printf("\nQueue is overflow");
}
else{
if(front==-1)
{
front=0;
}

printf("\n Enter an element ");
scanf("%d",&item);
rear=rear+1;
queue[rear]=item;
printf("\n Item inserted is = %d",item);

}
}
void pop()
{
if(front<0 || front>rear)
{
printf("Queue is Underflow");
}
else
{
item=queue[front];
front=front+1;
printf("\n Queue element is deleted");
if(front>rear)
{
front=-1;
rear=-1;
}
}
}
void display()
{
int i;
if(front==-1)
{
printf("Queue is empty \n");
}
else
{
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
}