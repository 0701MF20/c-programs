#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int cqueue[1],rear=-1,front=-1;
int size=sizeof(cqueue);
void insertCQ(int item);
void deletCQ();
void displayCQ();
int main()
{
int choice,j,c,m;
while(1)
{
//system("clear");
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
//do{
	printf("Enter the element in queue :");
	scanf("%d",&m);
insertCQ(m);
//printf("\nDo you want to enter more nodes so press 1 otherwise press any key :");
//scanf("%d",&c);
//}while(c==1);
printf("\n-------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 2:
displayCQ();
printf("\n-----------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 3:
deletCQ();
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
void insertCQ(int item)
{
//	int size=sizeof(cqueue);
	if((front==0&&rear==size-1)||(front==rear+1))
	{
		printf("Overflow");
		return;
	}
	  if(front==-1)
	  {
	  	front=0;
	  	rear=0;
	  }	
	  else
	  { 
	  if(rear==size-1)
	  {
	  	rear=0;
	  }
	  else
	  rear=rear+1;
      }   
	  cqueue[rear]=item;	
}
void deletCQ()
{
//	int size=sizeof(cqueue);
	if(front==-1)
	{
		printf("Underflow");
		return;
	}
	printf("Element is deleted");
		if(rear==front)
		{
		front=-1;
		rear=-1;
		}
		else
		{
		if(front==size-1)
		front=0;
		else
		front=front+1;
		}
}
 void displayCQ()
 {
	int ptr=front,temp=rear;
	if(front==-1)
	{
	    printf("Queue is empty");
	}
   if(ptr<=temp)
		while(ptr<=temp)
		{
			printf("%d ",cqueue[ptr]);
			ptr++;
		}
	else
	{
		while(ptr<=size-1)
		{
			printf("%d ",cqueue[ptr]);
			ptr++;
		}
		ptr=0;
		while(ptr<=temp)
		{
			printf("%d ",cqueue[ptr]);
			ptr++;
		}
	}
	printf("\n");
}
/*
# include<stdio.h>
# define MAX 3
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
/*Begin of insert*/
void insert(int item)
{
	if((front == 0 && rear == MAX-1) || (front == rear+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (front == -1)  /*If queue is empty */
	{
		front = 0;
		rear = 0;
	}
	else
	{
		if(rear == MAX-1)	/*rear is at last position of queue */
			rear = 0;
		else
			rear = rear+1;
	}
	cqueue_arr[rear] = item ;
}
/*End of insert*/

/*Begin of del*/
void del()
{
	if (front == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted from queue is : %d\n",cqueue_arr[front]);
	if(front == rear) /* queue has only one element */
	{
		front = -1;
		rear=-1;
	}
	else
	{	
		if(front == MAX-1)
			front = 0;
		else
			front = front+1;
	}
}
/*End of del() */

/*Begin of display*/
void display()
{
	int front_pos = front,rear_pos = rear;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
		while(front_pos <= rear_pos)
		{
			printf("%d ",cqueue_arr[front_pos]);
			front_pos++;
		}
	else
	{
		while(front_pos <= MAX-1)
		{
			printf("%d ",cqueue_arr[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{
			printf("%d ",cqueue_arr[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
/*End of display*/

/*Begin of main*/
int main()
{
	int choice,item;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d", &item);

				insert(item);
				break;
			case 2 :
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				printf("Wrong choice\n");
		}
	}while(choice!=4);
	
	return 0;
}
/*End of main*/


*/












