#include<stdio.h>
struct node
{
int info;
struct node *rchild,*lchild;
}*root=NULL,*par=NULL,*save=NULL;
void find(int item,int root)
{
struct node *loc;
if(root==NULL)
{
	loc=NULL;
	par=NULL;
	return;
}
if(root->info==item)
{
	loc=root;
	par=NULL;
}
if(item<root->info)
{
   ptr=root->lchild;
   save=root
}	
else
{
   ptr=root->rchild;
   save=root;
}
while(ptr!=NULL)
{
    if(ptr->info==item)
    {
    	loc=ptr;
    	par=save;
    	return;
	}
	if(ptr->info>item)
	{
		save=ptr;
		ptr=ptr->lchild;
	}
	else
	{
		save=ptr;
		ptr=ptr->rchild;
	}
}
loc=NULL;
par=save;
return;	
}
void insert(int loc,int item,int par)
{
	if(loc!=NULL)
	{
		return;
	}
	struct node *new1;
	new1=(struct node*)malloc(sizeof(struct node));
	new1->info=item;
	new1->rchild=new1->lchild=NULL;
	if(par->info==item)
	{
		root=new1;
	}
	else if(par->info>item)
	{
		par->lchild=new1;
	}
	else
	{
		par->rchild=new1;
	}
return;	
}
void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf(p->info);
		preorder(p->lchild);
		preorder(p->rchild);
	}

}
int main()
{
int choice,j,c,m;
while(1)
{
system("cls");
printf("\nMENU-For TREE\n");
printf("1.Insert the element in queue\n");
printf("2.Display the element of queue\n");
//printf("3.Delete the element of queue\n");
printf("3.Press any key other than 1,2 to exit from program");
printf("\n------------------------------------------------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n------------------------------------------------------------------------\n");
switch(choice)
{
case 1:
do{
printf("Enter the element in tree :");
scanf("%d",&m);
find(m,root);
insert();
printf("\nDo you want to enter more nodes so press 1 otherwise press any key :");
scanf("%d",&c);
}while(c==1);
printf("\n-------------------------------------------------------------------------\n");
printf("\nPress any key for executing other operation:");
break;
case 2:
preorder();
printf("\n-------------------------------------------------------------------------\n");
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
