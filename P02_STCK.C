#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,n,stack[30],top,item;
clrscr();
top=-1;
printf("Enter height of stack\n");
scanf("%d",&n);
do{
printf("\nChoose an option\n 1: PUSH\n 2: POP\n 3: DISPLAY\n 4: EXIT\n");
scanf("%d",&a);
switch(a){
case 1 : if(top==n-1){
	  printf("stack overflow\n");
	  }
	 else{
	 printf("Enter the element\n");
	 scanf("%d",&item);
	 top++;
	 stack[top]=item;
	 }
	 break;
case 2 : if(top==-1){
	  printf("stack underflow\n");
	  }
	 else{
	 item=stack[top];
	 top--;
	 printf("%d poped from stack",item);
	 }
	 break;
case 3 : for(i=0;i<=top;i++){
	  printf("%d ",stack[i]);
	  }
	  break;
case 4 : exit(1);
defult:printf("Enter valid option");
       break;
}
}while(1);
getch();
}

