#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
struct node *lchild;
int data;
struct node *rchild;
}*root=NULL;
struct node *Rinsert(struct node *p,int key)
{
 struct node *t=NULL;
 if(p==NULL)
{
    t=new node;
    t->data=key;
    t->lchild=t->rchild=NULL;
    return t;
 }
 if(key<p->data)
 p->lchild=Rinsert(p->lchild,key);
 else if(key>p->data)
 p->rchild=Rinsert(p->rchild,key);
 return p;
}
void Insert(int key)
{
struct node *t=root;
struct node *r=NULL,*p;
if(root==NULL)
{
p=new node;
p->data=key;
p->lchild=p->rchild=NULL;
root=p;
return;
}
while(t!=NULL)
{
r=t;
if(key<t->data)
t=t->lchild;
else if(key>t->data)
t=t->rchild;
else
return;
}
p=new node;
p->data=key;
p->lchild=p->rchild=NULL;
if(key<r->data) r->lchild=p;
else r->rchild=p;
}
struct node *searched(struct node *p,int key)
{
    while(p!=NULL)
    {
    if(p->data==key)
    {
     return p;
    }
    else if(p->data>key)
    {
     p=p->lchild;
    }
    else if(p->data<key)
    {
    p=p->rchild;
    }
    }
    return NULL;
}
struct node *search(struct node *p,int key)
{
    if(p==NULL)
    return NULL;
    if(key==p->data)
    return p;
    else if(key<p->data)
    {
        return search(p->lchild,key);
    }
    else
    {
        return search(p->rchild,key);
    }
}
int height(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=height(p->lchild);
        y=height(p->rchild);
        if(x>y)
        return x+1;
        else
        return y+1;
    }
    return 0;
}
void preorder(struct node *p)
{
    if(p)
    {
    cout<<p->data<<" ";
    preorder(p->lchild);
    preorder(p->rchild);
    }
}
void inorder(struct node *p)
{
    if(p)
    {
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
    }
}
void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
struct node *Inpre(struct node *p)
{
    while(p!=NULL&&p->lchild!=NULL)
    {
       p=p->lchild;
    }
    return p;
}
struct node *Insucc(struct node *p)
{
    while(p!=NULL&&p->rchild!=NULL)
    {
        p=p->rchild;
    }
    return p;
}
struct node *deletes(struct node *p,int key)
{
  struct node *q;
  if(p==NULL)
  {
    return NULL;
  }
  if(p->lchild==NULL&&p->rchild==NULL)
  {
      if(p==root)
          root=NULL;
        //  x=p->data;
          delete(p);
          return NULL;
  }
      if(key>p->data)
      p->rchild=deletes(p->rchild,key);
      else if(key<p->data)
      p->lchild=deletes(p->lchild,key);
  else
  {
   if(height(p->lchild)>height(p->rchild))
   {
    q=Inpre(p->lchild);
    p->data=q->data;
    p->lchild=deletes(p->lchild,q->data);
   }
   else
   {
    q=Insucc(p->rchild);
    p->data=q->data;
    p->rchild=deletes(p->rchild,q->data);
   }
  }
 return p;
}
int main()
{
      root=Rinsert(root,2);
   cout<<root;
      cout<<Rinsert(root,4);
      cout<<"\n";
      cout<<Rinsert(root,5);
      cout<<"\n";
      Rinsert(root,7);
   //root=NULL;
   Insert(10);
    Insert(12);
  Insert(14);
    Insert(15);
    Insert(16);
 Rinsert(root,20);
      cout<<"preorder:";
      preorder(root);
      cout<<"\ninorder:";
      inorder(root);
      cout<<"\npostorder:";
      postorder(root);
      cout<<"\n";
      cout<<"\nheight is:"<<height(root);
      cout<<"DELETING\n";
      deletes(root,7);
      //deletes(root,2);
      cout<<"Deleted!\n";
       cout<<"preorder:";
      preorder(root);
      cout<<"\ninorder:";
      inorder(root);
      cout<<"\npostorder:";
      postorder(root);
      cout<<"\n";
      if(searched(root,20)==NULL)
      {
      cout<<"Element not founded!";
      }
      else
      {
          cout<<"Element is found at position :"<<searched(root,20);
          cout<<"\nElement is found!\n";
      }
      if(search(root,9)==NULL)
      {
      cout<<"Element not founded!";
      }
      else
      {
          cout<<"Element is found at position :"<<searched(root,9);
          cout<<"\nElement is found!";
      }
      return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
struct node *lchild;
int data;
struct node *rchild;
}*root=NULL;
void createpre(int pre[],int n)
{
    stack st;
    struct node *t,*root;
    int i=0;
    root=new node;
    root->data=pre[i++];
    root->lchild=root->rchild=NULL;
    p=root;
    while(i<n)
    {
        t=p;
        if(pre[i]<p->data)
        {
            t=new node;
            t->data=pre[i++];
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            push(&st,p);
            p=t;
        }
        else if(pre[i]>p->data)
        {
            t=new node;
            t->data=pre[i++];
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            p=t;
        }
        else
        p=pop(&st);
    }
    void preorder(struct node *p)
{
    if(p)
    {
    cout<<p->data<<" ";
    preorder(p->lchild);
    preorder(p->rchild);
    }
}
void inorder(struct node *p)
{
    if(p)
    {
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
    }
}
void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}*/
