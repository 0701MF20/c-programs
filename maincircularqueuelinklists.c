#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node* link;
}*front=NULL,*rear=NULL;
void create()
{
struct node *new1,*ptr;
new1=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the element: ");
scanf("%d",&new1->info);
new1->link=NULL;
if(rear==NULL)
{
front=rear=new1;
front->link=front;
}
else
{
rear->link=new1;
new1->link=front;
rear=new1;	
}
printf("Element is inserted in circular linked list.\n");
}
void display()
{
int i=0;
struct node *ptr=front,*temp=NULL ;
if(front==NULL)
{
printf("UNDERFLOW");
return;
}
while (ptr!=temp)
{
if(i==1)
{
printf("->");
}
printf ("%d",ptr->info) ;
ptr=ptr->link ;
temp=front;
i=1;
}
}
void delet_CQll()
{
struct node *ptr;
if(front==NULL)
{
printf("UNDERFLOW\n");
}
else
{
ptr=front;
if(front==rear)
{
front=rear=NULL;
}
else
{
front=front->link;
rear->link=front;
}
free(ptr);
}
}
int main()
{
int choice,j,c;
while(1)
{
system("cls");
printf("\nMENU-IMPLENTATION CIRCULAR QUEUE BY LINKED LIST\n");
printf("1.Insertion of element in circular queue\n");
printf("2.Display of element in circular queue\n");
printf("3.Deletion of element in circular queue\n");
printf("4.Press any key other than 1,2,3 for exit from the program");
printf("\n---------------------------------------------------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n----------------------------------------------------------------------------\n");
switch(choice)
{
case 1:
do{
create();
printf("\nDo you want to enter more nodes so press 1 otherwise press any key :");
scanf("%d",&c);
}while(c==1);
printf("\n---------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 2:
display();
printf("\n---------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 3:
delet_CQll();
printf("\nPress any key for executing other operation:");
break;
default:
printf("\nWrong choice:\n");
exit(0);
}
getch();
}
return 0;
}

