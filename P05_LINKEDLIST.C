#include<stdio.h>

struct node
{
 int data;
 struct node *next;
};

   struct node *head;
   void beginsert(),endinsert(),randominsert();
   void begdelete(),enddelete(),randomdelete();
   void show();

   void main()
   {

    int choice;
    clrscr();
    while(1)
    {
     printf(" \n\t 1.beginsert \n\t 2.endinsert \n\t 3.randominsert \n\t 4.begdelete \n\t 5.enddelete \n\t 6.randomdelete \n\t 7.show \n\t 8.exit \n\t");
     printf("enter choice:");
     scanf("%d",&choice);

     switch(choice)
     {

     case 1:
     beginsert();
     break;

     case 2:
     endinsert();
     break;

     case 3:
     randominsert();
     break;

     case 4:
     begdelete();
     break;

     case 5:
     enddelete();
     break;

     case 6:
     randomdelete();
     break;

     case 7:
     show();
     break;

     case 8:
     exit(0);
     break;
    }
   }
 }


 void beginsert()
 {

  struct node *newnode;
  int item;

  newnode= (struct node*)malloc(sizeof(struct node));

  if(newnode==0)
  {
   printf("overflow");
  }
  else
  {
  printf("enter value");
  scanf("%d",&item);

  newnode->data=item;
  newnode->next=head;
  head=newnode;
  printf("node inserted at front");
  }
 }

 void endinsert()
 {

  struct node *newnode,*temp;
  int item;

  newnode= (struct node*)malloc(sizeof(struct node));

  if(newnode==0)
   {
    printf("overflow");
   }
  else
   {
    printf("enter value");
    scanf("%d",&item);
    newnode->data=item;
   }

  if(head==0)
   {
    newnode->next=0;
    head=newnode;
    printf("node inserted");
   }
   else
   {
    temp=head;
    while(temp->next!=0)
    {
     temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=0;
    printf(" node inserted at end");
   }
  }

  void randominsert()
  {
  struct node *newnode,*temp;
  int i,pos,item;

  newnode= (struct node*)malloc(sizeof(struct node));

  if(newnode==0)
   {
    printf("overflow");
   }
  else
   {
    printf("enter value");
    scanf("%d",&item);
    newnode->data=item;
    printf("enter position");
    scanf("%d",&pos);

     temp=head;

    for(i=0;i<pos-1;i++)
    {
     temp=temp->next;

     if(temp==0)
     {
      printf("cannot inserted");
     }
    }

     newnode->next=temp->next;
     temp->next=newnode;
   }
  }

  void show()
  {
   struct node *temp;
   temp=head;
   if(temp==0)
   {
    printf("nothing to print");
   }
   else
   {
    while(temp!=0)
    {
     printf("%d",temp->data);
     temp=temp->next;
    }
   }
  }

  void begdelete()
  {

   struct node *temp;

   if(head==0)
   {
    printf("underflow");
   }

   else
   {
    temp=head;
    head=head->next;
    free(temp);
   }
 }


  void  enddelete()
  {
   struct node *prevnode,*temp;

   if(head==0)
   {
    printf("underflow");
   }

   else
   {
   temp=head;

   while(temp->next!=0)
   {
    prevnode=temp;
    temp=temp->next;
   }

   prevnode->next=0;
   free(head);
  }
 }

  void randomdelete()
  {

   struct node *nextnode,*temp;
   int pos,i=1;

   temp=head;

   while(i<pos-1)

   {

    temp=temp->next;
    i++;
   }

   nextnode=temp->next;
   temp->next=nextnode->next;
   free(nextnode);
   printf("deleted node %d",pos);
  }