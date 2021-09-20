#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node
{
  int info;
  struct node* link;
}*start=NULL;
void insert(int item)
{
struct node *new1,*ptr,*prev;
new1=(struct node*)malloc(sizeof(struct node));
if(start==NULL)
{
new1->info=item;
new1->link=NULL;
start=new1;
}
new1->info=item;
if(item<start->info)
{
new1->link=start;
start=new1;
}
prev=start;
ptr=start->link;
while(ptr!=NULL&&ptr->info<item)
{
    prev=ptr;
    ptr=ptr->link;
}
prev->link=new1;
new1->link=ptr;
}
void display()
{
int i=0;
struct node* ptr;
if(start==NULL)
{
printf("\nUNDERFLOW\n");
}
else
{
ptr=start;
printf("\nLinked list elements are: ");
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
int search(int item)
{
struct node *LOC,*LOCP;
if(start==NULL)
{
LOCP=LOC=NULL;
return 0;
}
if(item==start->info)
{
LOC=start;
LOCP=NULL;
return 1;
}
LOCP=start;
LOC=start->link;
while(LOC!=NULL)
{
if(item==LOC->info)
return 1;
if(item<LOC->info)
{
LOCP=LOC=NULL;
return 0;
}
LOCP=LOC;
LOC=LOC->link;
}
LOCP=NULL;
return 0;
}
void dele()
{
struct node *LOC,*LOCP;
if(LOC==NULL)
{
printf("\nUNDERFLOW OR CANNOT FIND THE ELEMENT");
exit(0);
}
if(LOCP==NULL)
start=start->link;
else
{
LOCP->link=LOC->link;
}
printf("\nElement is deleted from linked list\n");
free(LOC);
}
int main()
{
int choice,item,j,c;
while(1)
{
system("CLS");
printf("\nMENU \n");
printf("1.Insert\n");
printf("2.Display\n");
printf("3.Search and detete element\n");
printf("4.Press any key other than 1,2,3");
printf("\n----------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n----------------------------------\n");
switch(choice)
{
case 1:
do{
printf("\nEnter the element:");
scanf("%d",&item);
insert(item);
printf("\n------------------------------------------------------------------------------\n");
printf("\nDo you want to enter more nodes then press 1 otherwise press any key: ");
scanf("%d",&c);
}while(c==1);
printf("\n------------------------------------------------------------------------------\n");
printf("\nEnter any key to proceed other operations.");
break;
case 2:
display();
printf("\n------------------------------------------------------------------------------\n");
printf("\nEnter any key to proceed other operations.");
break;
case 3:
printf("Enter the item to search and then delete: ");
scanf("%d",&item);
j=search(item);
dele();
printf("\nEnter any key to proceed other operations.");
break;
default:
printf("\n Wrong choice entered:\n");
exit(0);
}
getch();
}
return 0;
}






