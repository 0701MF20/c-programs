#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node* link;
}*start=NULL;
void create()
{
struct node *new1,*ptr;
new1=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the element: ");
scanf("%d",&new1->info);
new1->link=NULL;
if(start==NULL)
{
start=new1;
}
else
{
ptr=start;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=new1;
}
}
void display()
{
struct node* ptr;
int i=0;
if(start==NULL)
{
printf("\nLinked List is empty\n");
}
else
{
ptr=start;
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
int delet_last()
{
struct node *pre,*ptr;
if(start==NULL)
{
printf("UNDERFLOW");
return 0;
}
if(start->link==NULL)
{
free(start);
start=NULL;
return 0;
}
pre=start;
ptr=start->link;
while(ptr->link!=NULL)
{
pre=ptr;
ptr=ptr->link;
}
pre->link=NULL;
free(ptr);
return 0;
}
int main()
{
int choice,j,c;
while(1)
{
	system("cls");
printf("\nMENU \n");
printf("1.Create\n");
printf("2.Display\n");
printf("3.Delete\n");
printf("4.Press any key other than 1,2,3");
printf("\n----------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n----------------------------------\n");
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
//printf("\nPress any key for executing other operation:");
break;
case 3:
j=delet_last();
break;
default:
printf("\nWrong choice:\n");
exit(0);
}
getch();
}
return 0;
}














