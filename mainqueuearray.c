#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define max 3
int queue[max],rear=-1,front=-1;
void insert(int item);
void deletQ();
void display();
int main()
{
int choice,j,c,m;
while(1)
{
system("cls");
printf("\nMENU-QUEUE IMPLEMENTATION BY ARRAY\n");
printf("1.Insert the element in queue\n");
printf("2.Display the element of queue\n");
printf("3.Delete the element of queue\n");
printf("4.Press any key other than 1,2,3 to exit from program");
printf("\n------------------------------------------------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n------------------------------------------------------------------------\n");
switch(choice)
{
case 1:
do{
printf("Enter the element in queue :");
scanf("%d",&m);
insert(m);
printf("\nDo you want to enter more nodes so press 1 otherwise press any key :");
scanf("%d",&c);
}while(c==1);
printf("\n-------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 2:
display();
printf("\n-------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 3:
deletQ();
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
void insert(int item)
{
if(rear==max-1)
{
printf("Queue is full");
}
else
{
if(front==-1)
{
rear=front=0;
}
else
{
rear=rear+1;
}
queue[rear]=item;
}
}
void deletQ()
{
if(front==-1)
{
printf("Underflow");
return ;
}
if(front==rear)
{
front=rear=-1;
}
else
{
front=front+1;
}    
printf("Element is deleted");
}
void display() 
{
int i,j=0;
if(rear==-1)
{
printf("\nQueue is empty");
}
else 
{
printf("\nQueue elements are:\n");
for(i=front;i<=rear;i++)
{
if(j==1)
{
printf("->");
}
printf("%d",queue[i]);
j=1;
}
}
printf("\n");
}


