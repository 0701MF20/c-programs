#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include"queue.h"
#include<stdlib.h>
using namespace std;
struct node *root=NULL;
void tcreate()
{
    struct queue q;
    int x,y,z;
    struct node *t,*p;
    create(&q,160);
    cout<<"Enter the root: ";
    cin>>x;
    root=new node;
    root->data=x;
    root->rchild=NULL;
    root->lchild=NULL;
    enqueue(&q,root);
    while(!isempty(q))
    {
      p=dequeue(&q);
      cout<<"Enter the left child "<<p->data<<" is: ";
      cin>>y;
      if(y!=-1)
      {
          t=new node;
          t->data=y;
          t->lchild=NULL;
          t->rchild=NULL;
          p->lchild=t;
          enqueue(&q,t);
      }
      cout<<"Enter the right child "<<p->data<<" is: ";
      cin>>z;
      if(z!=-1)
      {
          t=new node;
          t->data=z;
          t->lchild=NULL;
          t->rchild=NULL;
          p->rchild=t;
          enqueue(&q,t);
      }
    }
}
void preorder(struct node *p)
{
    if(p)
    {
    cout<<p->data;
    preorder(p->lchild);
    preorder(p->rchild);
    }
}
void inorder(struct node *p)
{
    if(p)
    {
    inorder(p->lchild);
    cout<<p->data;
    inorder(p->rchild);
    }
}
void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data;
    }
}
int countall(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=countall(p->lchild);
        y=countall(p->rchild);
        return x+y+1;
    }
    return 0;
}
int count2(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=count2(p->lchild);
        y=count2(p->rchild);
        if(p->lchild!=NULL||p->rchild!=NULL)
        return x+y+1;
        else
        return x+y;
    }
    return 0;
}
int add(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=add(p->lchild);
        y=add(p->rchild);
        return x+y+p->data;
    }
    return 0;
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
int counter(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=counter(p->lchild);
        y=counter(p->rchild);
        if(p->lchild!=NULL&&p->rchild!=NULL)
        return x+y+1;
        else
        return x+y;
    }
    return 0;
}
int count1(struct node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=count1(p->lchild);
        y=count2(p->rchild);
        if(((p->lchild!=NULL)&&(p->rchild==NULL))^((p->lchild==NULL)&&(p->rchild!=NULL)))
        return x+y+1;
        else
        return x+y;
    }
    return 0;
}
struct node *searching(struct node *p,int key)
{
    while(p!=NULL)
    {
    if(p->data==key)
    return p;
    if(p->data<key)
    p=p->lchild;
    else
    if(p->data>key)
    p=p->rchild;
    }
    return NULL;
}
struct node *Inserti(struct node *p,int key)
{
    struct node *r,*t;
    while(p!=NULL)
    {
      r=p;
      if(key==p->data)
      return NULL;
      if(key>p->data)
      p=p->lchild;
      else
      p=p->rchild;
    }
    t=new node;
    p->data=t->data;
    if(p->data<r->data)
    r->rchild=p;
    else
    r->lchild=p;
    return p;
}

/*
struct node *Rinsert(struct node *p,int key)
{
 struct node *t;
 if(p==NULL)
 {
    t=new node;
    t->data=key;
    t->lchild=t->rchild=NULL;
 }
 if(key<p->data)
 p->rchild=Rinsert(p->rchild,key);
 else
 if(key>p->data)
 p->lchild=Rinsert(p->lchild,key);
 return p;
}
*/
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
  return NULL;
  if(p->lchild!=NULL&&p->rchild!=NULL)
  {
      if(p==root)
      {
          root=NULL;
          delete(p);
          return NULL;
      }
  if(key>p->data)
  {
      p->lchild=deletes(p->lchild,key);
  }
  else
    if(key<p->data)
    {
      p->rchild=deletes(p->rchild,key);
    }
  }
    else
    {
    if(height(p->lchild)>height(p->rchild))
    {
        q=Inpre(p->lchild);
        p->data=q->data;
        p->lchild=deletes(p->lchild,q->data);
    }
    else
    if(height(p->lchild)<height(p->rchild))
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
      /*tcreate();
      cout<<"preorder:";
      preorder(root);
      cout<<"\ninorder:";
      inorder(root);
      cout<<"\npostorder:";
      postorder(root);
      cout<<"\ncount all:"<<countall(root);
      cout<<"\nadd two elements:"<<add(root);
      cout<<"\ncount 2 nodes:"<<count2(root);
      cout<<"\nheight is:"<<height(root);
      cout<<"\n leaf node"<<counter(root);
      cout<<"\nCounting one degree node"<<count1(root);*/
      struct node *root=Inserti(root,30);
      Inserti(root,35);
      Inserti(root,10);
      Inserti(root,20);
      Inserti(root,25);
      Inserti(root,45);
      deletes(root,20);
      inorder(root);
      cout<<"\nheight is:"<<height(root);
      return 0;
}

/*struct node *search(struct node *p,int key)
{
    while(p!=NULL)
    {
    if(p->data==key)
    return p;
    if(p->data<key)
    p=p->lchild;
    else
    if(p->data>key)
    p=p->rchild;
    }
    return NULL;
}
void inserti(struct node *p,int key)
{
    struct node *r;
    while(p!=NULL)
    {
      r=t;
      if(key==p->data)
       return NULL;
        if(key>p->data)
        p=p->lchild;
      else
        p=p->rchild;
    }
    t=new node;
    p->data=t->data;
    if(p->data<r->data)
    r->rchild=p;
    else
    r->lchild=p;
}
struct node *Rinsert(struct node *p,int key)
{
 struct node *t;
 if(p==NULL)
 {
    t=new node;
    t->data=key;
    t->lchild=t->rchild=NULL;
 }
 if(key<p->data)
 p->rchild=Rinsert(p->rchild,key);
 else
 if(key>p->data)
 p->lchild=Rinsert(p->lchild,key);
 return p;
}
struct node *Inpre(struct node *p)
{
    while(p!=NULL&&p->lchild!=NULL)
    {
       p=p->lchild
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
struct node *delete(struct node *p,int key)
{
    struct node *q;
  if(p==NULL)
  return NULL;
  if(p->lchild!=NULL&&p->rchild!=NULL)
  {
      if(p==root)
      {
          root=NULL;
          delete(p);
          return NULL;
      }
  if(key>p->data)
  {
      p->lchild=delete(p->lchild,key);
  }
  else
    if(key<p->data)
    {
      p->rchild=delete(p->rchild,key);
    }
    else
    {
        if(height(p->lchild)>height(p->rchild))
    {
        q=inpre(p->lchild);
        p->data=q->data;
        p->lchild=delete(p->lchild,q->data);
    }
    else
    if(height(p->lchild)<height(p->rchild))
    {
        q=insucc(p->rchild);
        p->data=q->data;
        p->rchild=delete(p->rchild,q->data);
    }
}
  return p;
  }
int main()
{
    struct *root=Inserti(root,30);
    inserti(root,35);
    inserti(root,10);
    inserti(root,20);
    inserti(root,25);
    inserti(root,45);
    deletes(root,20);
    cout<<inorder(root);
    getch();
}*/
