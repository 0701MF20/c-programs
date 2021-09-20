#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node* link;
}*rear=NULL,*front=NULL;
void create()
{
struct node *new1,*ptr;
new1=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the element: ");
scanf("%d",&new1->info);
new1->link=NULL;
if(rear==NULL)
{
rear=front=new1;
}
else
{
ptr=rear;
while(rear->link!=NULL)
{
rear=rear->link;
}
rear->link=new1;
}
}
void display()
{
struct node* ptr;
int i=0;
if(front==NULL)
{
printf("\nLinked List is empty\n");
return 0;
}
else
{
ptr=front;
printf("\nThe List elements are: ");
while(ptr!=NULL)
{
if(i==1)
{
printf("->");
}
printf("%d",ptr->info);
ptr=ptr->link;
i=1;
}
}
}
void delet_FIFO()
{
struct node *ptr;
if(front==NULL)
{
printf("UNDERFLOW");
}
else
{
ptr=front;
front=front->link;
free(ptr);
}
}
int main()
{
int choice,j,c;
while(1)
{
	system("cls");
printf("\nMENU-QUEUE IMPLEMENTATION BY LINKED LIST \n");
printf("1.Insertion of element in queue\n");
printf("2.Displaying of element in queue\n");
printf("3.Deletion of element in queue\n");
printf("4.Press any key other than 1,2,3 for exit");
printf("\n--------------------------------------------------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n-------------------------------------------------------------------------\n");
switch(choice)
{
case 1:
do{
create();
printf("\nDo you want to enter more nodes so press 1 otherwise press any key :");
scanf("%d",&c);
}while(c==1);
printf("\n-------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 2:
display();
printf("\n---------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 3:
delet_FIFO();
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















