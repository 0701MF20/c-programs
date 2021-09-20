/*#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
int data;
struct node *next;
}*first=NULL;
void create(int A[],int n)
{
  int i;
  struct node *t,*last;
  first=new node;
  first->data=A[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++)
  {
      t=new node;
      t->data=A[i];
      t->next=NULL;
      last->next=t;
      last=t;
  }
}
void display(struct node *p)
{
 while(p!=NULL)
 {
     cout<<p->data;
     p=p->next;
 }
}
void rDISPLAY(struct node *p)
{
    if(p!=0)
    {
        rDISPLAY(p->next);
        cout<<p->data;
    }
}
void vdisplay(struct node *p)
{
    if(p!=NULL)
    {
        cout<<p->data;
        rDISPLAY(p->next);
    }
}
int count(struct node *p)
{
    int c =0;
while(p!=NULL)
{
 p=p->next;
 c++;
}
return(c);
}
int count1(struct node *p)
{
    int c=0;
    if(p!=0)
    {
        count1(p->next);
        c++;
    }
    return(c);
}
int sum(struct node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int maxm(struct node *p)
{
    int m=-32768;
    while(p!=0)
    {
        if(p->data>m)
        m=p->data;
        p=p->next;
    }
    return m;
}
node *search(struct node *p,int key)
{
    while(p!=0)
    {
        if(p->data==key)
            return p;
        p=p->next;
    }
    return NULL;
}
int searchi(struct node *p,int key)
{
    int r;
    while(p!=0)
    {
        if(p->data==key)
            {
                r=p->data;
                return r;
            }
        p=p->next;
    }
    return NULL;
}
int main()
{
    struct node *temp;
    int A[]={1,2,3,4,5,6,7,8};
    create(A,8);
   display(first);
   cout<<"\n";
    rDISPLAY(first);
    cout<<"\n";
    vdisplay(first);
    cout<<"\n";
    cout<<"Value of element"<<count(first);
    cout<<"\n";
    cout<<"value of element 1: "<<count(first);
    cout<<"\n";
    cout<<"value of sum "<<sum(first);
    cout<<"\n";
    cout<<"The maximum value : "<<maxm(first);
    cout<<"\n the element is present in (location) "<<search(first,7);
    cout<<"\n the element is present in  "<<searchi(first,7);
    return 0;
}*/
/* inserting at a particular position

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
void insert(int pos,int x)
{
    struct node *t;
    t=new node;
    t->data=x;
    if(pos==0)
    {
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0;i<pos-1&&p;i++)
        {
            p=p->next;
        }
        p
    }
}
int main()
{
    int A[]={3,5,8,9,2,3,7};
    create(A,4);
    display(first);
    return 0;
}
*/
//inserting element at the last
/*#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void insertlast(int x)
{
    struct node *t,*last;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        last=first=t;
    }
    else
    {
       last->next=t;
       last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
int main()
{
    insertlast(4);
    insertlast(9);
    cout<<"\n";
    display(first);
    return 0;
}
*/
//*********************************
//INSERTION OF ELEMENT IN SORTED LINKED LIST
/*#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void insertsort(int x)
{
    struct node *p,*q,*t;
    p=first;
    q=NULL;
    if(x<p->data)
    {
     t=new node;
     t->data=x;
     t->next=first;
     first=t;
    }
    else
    {
      while(p&&p->data<x)
       {
           q=p;
           p=p->next;
       }
      t=new node;
      t->data=x;
      t->next=q->next;
      q->next=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
int main()
{
    int A[]={2,3,7,8,9,10,15};
    create(A,5);
    display(first);
    cout<<"\n";
    insertsort(12);
    cout<<"\n";
    display(first);
    insertsort(1);
    cout<<"\n";
    display(first);
    return 0;
}


*/
//          DELETING FROM LINKED LIST
/*#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
int deletes(int pos)
{
    struct node *q,*p;
    int i,x;
    if(pos==1)
    {
     p=first;
     x=p->data;
     first=first->next;
     delete p;
    }
    else
    {
    p=first;
    q=NULL;
    for(int i=0;i<pos-1&&p;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    }
    return x;
}
int main()
{
    int A[]={1,2,4,7,9};
    create(A,4);
    display(first);
    deletes(4);
    cout<<"\n";
    display(first);
    return 0;
}*/
//checking is sorted
/*#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
int deletes(int pos)
{
    struct node *q,*p;
    int i,x;
    if(pos==1)
    {
     p=first;
     x=p->data;
     first=first->next;
     delete p;
    }
    else
    {
    p=first;
    q=NULL;
    for(int i=0;i<pos-1&&p;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    }
    return x;
}
 int checksort()
 {
  struct node *p;
  int x=-32768;
  p=first;
  while(p!=0)
  {
    if(p->data<x)
    return 0;
    x=p->data;
    p=p->next;
   }
  return 1;
}
int main()
{
    int A[]={3,5,8,12,13,18};
    create(A,6);
    display(first);
    deletes(4);
    cout<<"\n";
    display(first);
    cout<<"\n";
    cout<<"checking process: "<<checksort();
    return 0;
}
*/
/*for removing duplicates
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
   void duplicate()
   {
    struct node *p,*q;
    p=first;
    q=p->next;
    while(q!=NULL)
    {
     if(p->data!=q->data)
     {
      p=q;
      q=q->next;
     }
      else
      {
       p->next=q->next;
       delete q;
       q=p->next;
      }
    }
}
int main()
{
    int A[]={4,4,4,4,4,4,6,7,8,};
    create(A,6);
    display(first);
    cout<<"\n";
    duplicate();
    display(first);
    return 0;
}*/
/*REVERSING OF ELEMENT
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
void reverse()
{
    struct node *p;
    p=first;
    int A[12];
    int i=0;
    while(p!=NULL)
    {
        A[i]=p->data;
        p=p->next;
        i++;
    }
    i--;
    p=first;
    while(p!=0)
    {
        p->data=A[i--];
        p=p->next;
    }
}
int main()
{
    int A[]={1,2,3,4,5,7,8,9};
    create(A,6);
    display(first);
    cout<<"\n";
    reverse();
    display(first);
    return 0;
}
//concatenating two linked list//
/*
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}void create2(int B[],int n)
{
    struct node *t,*last;
    second=new node;
    second->data=B[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
void concatnate()
{
    struct node *p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
    second=NULL;
}
int main()
{
    int A[]={1,2,3,4,5,7,8,9};
    int B[]={1,2,4,7,8,9};
    create(A,4);
    display(first);
    cout<<"\n";
    create2(B,4);
    display(second);
    cout<<"\n";
    concatnate();
    display(first);
    return 0;
}
*/
//MERGING OF TWO LINKED LIST
/*#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create2(int B[],int n)
{
    struct node *t,*last;
    second=new node;
    second->data=B[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
 void merged()
 {
  struct node *last;
  if(first->data<second->data)
  {
    third=last=first;
    first=first->next;
    last->next=NULL;
  }
  else
  {
     third=last=second;
     second=second->next;
     last->next=NULL;
  }
  while(first!=NULL&&second!=NULL)
  {
   if(first->data<second->data)
    {
     last->next=first;
     last=first;
     first=first->next;
     last->next=NULL;
    }
    else
    {
         last->next=second;
         last=second;
         second=second->next;
         last->next=NULL;
    }
  }
  if(first!=NULL)
  last->next=first;
  else
  last->next=second;
}
int main()
{
    int A[]={2,8,10,15};
    int B[]={4,7,12,14};
    create(A,4);
    display(first);
    cout<<"\n";
    create2(B,4);
    display(second);
    cout<<"\n";
    merged();
    display(third);
    return 0;
}
*/
//is loop or not
/*#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data;
        p=p->next;
    }
}
int isloop(struct node *f)
{
    struct node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    }while(p&&q);
  //  return p=q?TRUE:FALSE;
  if(p==q)
  return 1;
  else
  return 0;
}
int main()
{
    struct node *t1,*t2;
    int A[]={10,20,30,40,50};
    create(A,5);
   // display(first);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    cout<<"\n";
    cout<<"loop is :"<<isloop(first);
    return 0;
}
*/
// circular linked list
/*
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
 int data;
 struct node *next;
}*head;
void create(int A[],int n)
{
  int i;
  struct node *t,*last;
  head=new node;
  head->data=A[0];
  head->next=head;
  last=head;
  for(i=1;i<n;i++)
  {
      t=new node;
      t->data=A[i];
      t->next=head;
      last->next=t;
      last=last->next;
      last=t;
  }
}
void display(struct node *p)
{
    do
    {
     cout<<p->data;
     p=p->next;
    }while(p!=head);
}
void rdisplay(struct node *p)
{
    static int flag=0;
    if(p!=head||flag==0)
    {
        flag=1;
        cout<<p->data;
        rdisplay(p->next);
    }
}
void insert(int pos,int x)
{
  struct node *p,*q,*t;
  t=new node;
  if(pos==0)
  {
    if(head==NULL)
     {
         t->data=x;
         head=t;
         head->next=head;
     }
     else
     {
         p=head;
         while(p->next!=head)
         {
         p=p->next;
         }
         p->next=t;
         t->data=x;
         t->next=head;
         head=t;
     }
    }
    else
    {
     p=head;
     for(int i=0;i<pos-1;i++)
     {
      p=p->next;
     }
     q=p->next;
     t->data=x;
     p->next=t;
     t->next=q;
    }
  }
 int deletes(int posi)
 {
    struct node *p,*q;
    int x;
    if(posi==1)
    {
        p=head;
      while(p->next!=head)
      {
          p=p->next;
      }
      if(p==head)
      {
          x=head->data;
          delete head;
          head=NULL;
          return x;
      }
      else
      {
       x=head->data;
       p->next=head->next;
       delete head;
       head=head->next;
       return x;
      }
    }
    else
    {
        p=head;
        for(int i=0;i<posi-2;i++)
        {
        p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;
        q=q->next;
    }

  return x;
}
int main()
{
    int A[]={3,7,8,9};
    create(A,2);
    display(head);
    cout<<"\n";
    rdisplay(head);
    cout<<"\n";
    insert(0,7);
    display(head);
    cout<<"\n";
    cout<<deletes(1);
    cout<<"\n";
    display(head);
    return 0;
}
*/
/* double linked list

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
 struct node *t,*last;
 int i;
 first=new node;
 first->data=A[0];
 first->prev=NULL;
 first->next=NULL;
 last=first;
 for(i=1;i<n;i++)
 {
     t=new node;
     t->data=A[i];
     t->next=last->next;
     t->prev=last;
     last->next=t;
     last=t;
 }
}
void display(struct node *p)
{
    p=first;
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}
int length(struct node *p)
{
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    cout<<"\n";
    return c;
}
void insert(int pos,int x)
{
    struct node *t,*p;
    p=first;
    if(pos==0)
    {
        t=new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        t=new node;
        t->data=x;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        if(p->next)
        p->next->prev=t;
        p->next=t;
    }
}
void deletes(int posi)
{
 if(posi==0)
 {
 p=first;
 first=first->next;
 x=p->data;
 delete p;
 if(first)
 first->prev=NULL;
 }
 else
 {
     p=first;
     for(int i=0;i<pos-1;i++)
     {
     p=p->next;
     }
     p->prev->next=p->next;
     if(p->next)
     p->next->prev=p->prev;
     x=p->data;
     delete p;
 }
}
int main()
{
    int A[]={3,7,9,5,1,6};
    create(A,5);
   // cout<<"\n";
    display(first);
    cout<<"\n";
    cout<<"length is "<<length(first);
    cout<<"\n";
    insert(2,4);
    display(first);
    cout<<"\n";
    deletes(6);
    display(first);
    return 0;
}*/
//circular doubly linked list
/*#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head=NULL;
void create(int A[],int n)
{
    struct node *last,*t;
    head=new node;
    head->data=A[0];
    head->next=head;
    head->prev=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->prev=last;
        last->next=t;
        last=head;
        last=t;
        last->next=head;
        head->prev=last;
    }
}
void display(struct node *p)
{
    do
    {
        cout<<p->data;
        p=p->next;
    }while(p!=head);
}
void insert(int pos,int x)
{
    struct node *p,*q,*t;
    p=head;
    if(pos==0)
    {
         t=new node;
        if(head==NULL)
        {
          t->data=x;
          t->next=p;
          t->prev=p;
        }
        else
        {
          t->data=x;
          while(p->next!=head)
          {
            p=p->next;
          }
          t->prev=p;
          p->next=t;
          t->next=head;
          head->prev=head;
          head=t;
        }
    }
    else
    {
        t=new node;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
         q=p->next;
         t->data=x;
         t->prev=p;
         p->next=t;
        if(q==head)
        {
         t->next=head;
         head->prev=t;
        }
        else
        {
           t->next=q;
           q->prev=t;
        }
    }
}
int deletes(int posi)
{
 struct node *p,*q;
 int x;
 p=head;
 if(posi==1)
 {
   if(p->next==head)
   {
       x=p->data;
       delete p;
      head->next=NULL;
      head->prev=NULL;
       return x;
   }
   else
   {
    x=p->data;
    delete p;
    q=head;
    while(q->next!=head)
    {
        q=q->next;
    }
    head=head->next;
    head->prev=q;
    q->next=head;
    return x;
   }
 }
   else
    {
     for(int i=0;i<posi-1;i++)
     {
      p=p->next;
     }
     if(p->next!=NULL)
     {
         p->prev->next=p->next;
         p->next->prev=p->prev;
         x=p->data;
         delete p;
         return x;
     }
     else
     {
         x=p->data;
         p->prev->next=head;
         head->prev=p->prev;
         delete p;
         return x;
     }
    }
 }

int main()
{
 int A[]={1,3,6,8,9,5};
 create(A,5);
 cout<<"\n";
 display(head);
 insert(5,5);
 cout<<"\n";
 display(head);
 cout<<"\n";
 deletes(5);
 display(head);
 return 0;
 }
*/
//CIRCULAR LINKED LIST BY CPP
/*#include <iostream>
#include<stdlib.h>
using namespace std;
class node
{
    public:
    int data;
    node *prev;
    node *next;
};
class linkedlist
{
    private:
    node *head;
    public:
    linkedlist()
    {
        head=NULL;
    }
    linkedlist(int A[],int n);
    void display();
    void insert(int pos,int x);
    void deletes(int posi);
    ~linkedlist();
};
linkedlist::~linkedlist()
{
  node *p=head;
  while(head)
  {
    head=head->next;
    delete p;
    p=head;
   }
}
 linkedlist::linkedlist(int A[],int n)
{
    node *last,*t;
    head=new node;
    head->data=A[0];
    head->next=head;
    head->prev=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->prev=last;
        last->next=t;
        last=head;
        last=t;
        last->next=head;
        head->prev=last;
    }
}
void linkedlist::display()
{
    node *p=head;
    do
    {
        cout<<p->data;
        p=p->next;
    }while(p!=head);
}
void linkedlist::insert(int pos,int x)
{
    node *p,*q,*t;
    p=head;
    if(pos==0)
    {
         t=new node;
        if(head==NULL)
        {
          t->data=x;
          t->next=p;
          t->prev=p;
        }
        else
        {
          t->data=x;
          while(p->next!=head)
          {
            p=p->next;
          }
          t->prev=p;
          p->next=t;
          t->next=head;
          head->prev=head;
          head=t;
        }
    }
    else
    {
        t=new node;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
         q=p->next;
         t->data=x;
         t->prev=p;
         p->next=t;
        if(q==head)
        {
         t->next=head;
         head->prev=t;
        }
        else
        {
           t->next=q;
           q->prev=t;
        }
    }
}
void linkedlist::deletes(int posi)
{
 node *p,*q;
 int x;
 p=head;
 if(posi==1)
 {
   if(p->next==head)
   {
       //x=p->data;
       delete p;
      head->next=NULL;
      head->prev=NULL;
     //  return x;
   }
   else
   {
    //x=p->data;
    delete p;
    q=head;
    while(q->next!=head)
    {
        q=q->next;
    }
    head=head->next;
    head->prev=q;
    q->next=head;
   // return x;
   }
 }
   else
    {
     for(int i=0;i<posi-1;i++)
     {
      p=p->next;
     }
     if(p->next!=NULL)
     {
         p->prev->next=p->next;
         p->next->prev=p->prev;
      //   x=p->data;
         delete p;
     //    return x;
     }
     else
     {
        // x=p->data;
         p->prev->next=head;
         head->prev=p->prev;
         delete p;
       //  return x;
     }
    }
 }

int main()
{
 int A[]={1,3,6,8,9,5};
 linkedlist l(A,5);
 cout<<"\n";
 l.display();
 l.insert(2,5);
 cout<<"\n";
 l.display();
 cout<<"\n";
 l.deletes(2);
 l.display();
 return 0;
 }
/*

#include<iostream>
using namespace std;
class stack
{
    private:
    int size;
    int *s;
    int top;
    public:
    stack()
    {
        size=10;
        top=-1;
        s=new int[size];
    }
    stack(int size)
    {
       this->size=size;
       top=-1;
       s=new int[this->size];
    }
    void push(int x);
    int pop();
    int peek(int pos);
    int stacktop();
    int isempty();
    int isfull();
    void display();
};
void stack::push(int x)
{
    if(top==size-1)
    {
    cout<<"stack is overflow";
    cout<<"\n";
    }
    else
    {
    top++;
    s[top]=x;
    }
}
int stack::pop()
{
    int x=-1;
    if(top==-1)
    {
    cout<<"stack is underflow";
    }
    else
    {
        x=s[top];
        top--;
    }
    return x;
}
int stack::peek(int pos)
{
  int x=-1;

  if(top==-1)
  {
      cout<<"stack is underflow";
  }
  else if(top-pos+1<0)
  {
  cout<<"invalid position";
  }
  else
  {
   x=s[top-pos+1];
  }
  return x;
 }
int stack::stacktop()
{
  int x;
  if(top==-1)
  return -1;
  return s[top];
}
int stack::isempty()
{
    if(top==-1)
    return 1;
    return 0;
}
int stack::isfull()
{
    if(top==size-1)
    return 1;
    return 0;
}
void stack::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<s[i];
        cout<<" ";
    }
}
int main()
{
    stack sp(5);
    sp.push(1);
    sp.push(2);
    sp.push(3);
    sp.push(4);
    sp.push(5);
    sp.push(6);
    cout<<"\n";
    sp.display();
    sp.peek(1);
    return 0;
}
/* with array and template

#include<iostream>
using namespace std;
template<class T>
class stack
{
    private:
    int size;
    T *s;
    int top;
    public:
    stack()
    {
        size=10;
        top=-1;
        s=new T[size];
    }
    stack(int size)
    {
       this->size=size;
       top=-1;
       s=new T[this->size];
    }
    void push(T x);
    T pop();
    T peek(int pos);
    T stacktop();
    int isempty();
    int isfull();
    void display();
};
template<class T>
void stack<T>::push(T x)
{
    if(top==size-1)
    {
    cout<<"stack is overflow";
    cout<<"\n";
    }
    else
    {
    top++;
    s[top]=x;
    }
}
template <class T>
T stack<T>::pop()
{
    T x=-1;
    if(top==-1)
    {
    cout<<"stack is underflow";
    }
    else
    {
        x=s[top];
        top--;
    }
    return x;
}
template <class T>
T stack<T>::peek(int pos)
{
  T x=-1;
  if(top==-1)
  {
      cout<<"stack is underflow";
  }
  else if(top-pos+1<0)
  {
  cout<<"invalid position";
  }
  else
  {
   x=s[top-pos+1];
  }
  return x;
 }
 template <class T>
T stack<T>::stacktop()
{
  int x;
  if(top==-1)
  return -1;
  return s[top];
}
template <class T>
int stack<T>::isempty()
{
    if(top==-1)
    return 1;
    return 0;
}
template <class T>
int stack<T>::isfull()
{
    if(top==size-1)
    return 1;
    return 0;
}
template <class T>
void stack<T>::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<s[i];
        cout<<" ";
    }
}
int main()
{
    stack<char> sp(5);
    sp.push('A');
    sp.push('B');
    sp.push('C');
    sp.push('D');
    sp.push('E');
    sp.push('F');
    cout<<"\n";
    sp.display();
    sp.pop();
    sp.pop();
    cout<<"\n";
    sp.display();
    sp.peek(1);
    return 0;
}
*/
/*
   stack class with linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class linkedlist
{
    private:
    node *top;
    public:
    linkedlist()
    {
        top=NULL;
    }
    void push(int x);
    int pop();
    int peek(int pos);
    int stacktop();
    int isempty();
    int isfull();
    void display();
};
void linkedlist::push(int x)
{
   node *t,*p;
   t=new node;
   if(t==NULL)
   {
   cout<<"stack is overflow";
   }
   else
   {
       p=top;
       t->data=x;
       t->next=top;
       top=t;
   }
}
int linkedlist::pop()
{
    node *p;
    int x=-1;
    if(top==NULL)
    cout<<"stack is underflow";
    else
    {
     p=top;
     x=p->data;
     top=top->next;
     delete p;
    }
    return x;
}
int linkedlist::peek(int pos)
{
 int x=-1;
 node *p;
 p=top;
 if(top==NULL)
 cout<<"stack is underflow";
 else
 {
 for(int i=0;i<pos-1&&p!=NULL;i++)
 {
     p=p->next;
 }
 x=p->data;
 }
return x;
}
int linkedlist::stacktop()
{
  int x=-1;
  node *p;
  //p=top;
  if(top==NULL)
  cout<<"stack is underfow";
  else
  {
    p=top;
    x=p->data;
  }
  return x;
}
int linkedlist::isempty()
{
    if(top==NULL)
    return 1;
    return 0;
}
int linkedlist::isfull()
{
    node *t=new node;
    if(t==NULL)
    return 1;
    return 0;
}
void linkedlist::display()
{
    node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}
int main()
{
    linkedlist ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);
    ll.push(6);
    cout<<"\n";
    ll.display();
    ll.pop();
    ll.pop();
    cout<<"\n";
    ll.display();
    cout<<"\nfind the value at the peek"<<ll.peek(1);
    cout<<"\nis it empty "<<ll.isempty();
    cout<<"\nis it full "<<ll.isfull();
    cout<<"\n value of top is"<<ll.stacktop();
    return 0;
}
*/
//
/*

#include <iostream>
#include<string.h>
using namespace std;
struct stack
{
 int size;
 struct node *top;
 char *expi;
};
void push(char x)
{
    if(top==size-1)
    {
    cout<<"stack is overflow";
    cout<<"\n";
    }
    else
    {
    top++;
    s[top]=x;
    }
}
int pop()
{
    int x=-1;
    if(top==-1)
    {
    cout<<"stack is underflow";
    }
    else
    {
        x=s[top];
        top--;
    }
    return x;
}
int isbalance(char *expi)
{
 /*struct stack st;
 size=strlen(expi);
 top=-1;
 s=new char[size]; */
 for(int i=0;expi[i]!='\0';i++)
 {
    if(expi[i]=='(')
    push(expi[i]);
    else if(expi[i]==')')
    {
        if(isempty())
        {
            return 0;
            else
            pop(&st);
        }
    }
 }
 if(isempty(st))
 {
     return 1;
     else
     return 0;
 }
 }
 int isempty(struct stack st)
 {
    if(st.top==-1)
    return 1;
    return 0;
 }
 /*void create(struct stack *st)
 {
     cout<<"enter the size";
     cin>>st->size;
     st->top=-1;
     st->s=new char[st->size];
 }
 void display(struct stack st)
 {
     for(int i=st.top;i>=0;i++)
     cout<<st.s[i];
 }*/
 int main()
 {
     char expi="((a+b)*(c-d))";
     struct stack st;
     size=strlen(expi);
     top=-1;
     s=new char[size];
     cout<<"is it balance or not"<<isbalance(expi)
     return 0;
 }

 */
/*
#include <iostream>
#include<string.h>
using namespace std;
struct stack
{
 int size;
 struct node *top;
 char *expi;
}*top=-1;
void push(char x)
{
    if(top==size-1)
    {
    cout<<"stack is overflow";
    cout<<"\n";
    }
    else
    {
    top++;
    s[top]=x;
    }
}
int pop()
{
    int x=-1;
    if(top==-1)
    {
    cout<<"stack is underflow";
    }
    else
    {
        x=s[top];
        top--;
    }
    return x;
}
int isbalance(char *expi)
{
 /*struct stack st;
 size=strlen(expi);
 top=-1;
 s=new char[size]; */
 for(int i=0;expi[i]!='\0';i++)
 {
    if(expi[i]=='(')
    push(expi[i]);
    else if(expi[i]==')')
    {
        if(isempty())
        {
            return 0;
            else
            pop(&st);
        }
    }
 }
 if(isempty(st))
 {
     return 1;
     else
     return 0;
 }
 }
 int isempty(struct stack st)
 {
    if(st.top==-1)
    return 1;
    return 0;
 }
 /*void create(struct stack *st)
 {
     cout<<"enter the size";
     cin>>st->size;
     st->top=-1;
     st->s=new char[st->size];
 }
 void display(struct stack st)
 {
     for(int i=st.top;i>=0;i++)
     cout<<st.s[i];
 }*/
 char *convert(char *infix)
 {
     struct stack st;
     size=strlen(infix)+1;
     top=-1;
     s=new char[size];
     int i=0,j=0;
     while(exp[i]='\0')
     {
        if(isoperand(infix[i])
        {
            postfix[j++]=infix[i++];
        }


     }


 }
 int isoperand(char x)
 {
     if(x=='-'||x=='+'||x=='*'||x=='/')
     return 0;
     else
     return 1;
 }
 int ispre(char x)
 {
     if(x=='-'||x=='+')
     return 1;
     else if(x=='*'||x=='/')
     return 2;
     else
     return 0;
 }
 int main()
 {
     char expi="((a+b)*(c-d))";
     struct stack st;
     size=strlen(expi);
     top=-1;
     s=new char[size];
     cout<<"is it balance or not"<<isbalance(expi)
     return 0;
 }*/
/*
infix to postfix converter
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*top=NULL;
void push(int x)
{
   node *t,*p;
   t=new node;
   if(t==NULL)
   {
   cout<<"stack is overflow";
   }
   else
   {
       p=top;
       t->data=x;
       t->next=top;
       top=t;
   }
}
char pop()
{
    node *p;
    int x=-1;
    if(top==NULL)
    cout<<"stack is underflow";
    else
    {
     p=top;
     x=p->data;
     top=top->next;
     delete p;
    }
    return x;
}
char stacktop()
{
  char x=-1;
  node *p;
  //p=top;
  if(top==NULL)
  cout<<"stack is underfow";
  else
  {
    p=top;
    x=p->data;
  }
  return x;
}
int isempty()
{
    if(top==NULL)
    return 1;
    return 0;
}
int isfull()
{
    node *t=new node;
    if(t==NULL)
    return 1;
    return 0;
}
void display()
{
    node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}
int isbalance(char *exp)
{
 for(int i=0;exp[i]!='\0';i++)
 {
    if(exp[i]=='(')
    {
    push(exp[i]);
    }
    else if(exp[i]==')')
    {
     if(top==NULL)
     return 0;
     pop();
    }
 }
    if(top==NULL)
    return 1;
    else
    return 0;
}
 int isoperand(char x)
 {
     if(x=='-'||x=='+'||x=='*'||x=='/')
     return 0;
     else
     return 1;
 }
 int pre(char x)
 {
     if(x=='-'||x=='+')
     return 1;
     else if(x=='*'||x=='/')
     return 2;
     return 0;
 }
char* convert(char *infix)
{
     char *postfix=new char[strlen(infix)];
     int i=0,j=0;
     while(infix[i]!='\0')
     {
        if(isoperand(infix[i]))
            postfix[j++]=infix[i++];
        else
        {
            if(pre(infix[i])>pre(stacktop()))
            push(infix[i++]);
            else
            postfix[j++]=pop();
        }
     }
     while(top!=NULL)
     {
       postfix[j++]=pop();
     }
     postfix[j]='\0';
     return postfix;
 }
int main()
{
     char *exp="((a+b)";
     cout<<isbalance(exp);
     cout<<"\n";
     char *infix="a+b*c-d/e";
     char *postfix=convert(infix);
     cout<<"the postfix is"<<postfix;
    return 0;
}
*/
/* PARANTHESIS MATCHING AND BALANCING AND INFIX TO POSTFIX
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*top=NULL;
void push(char x)
{
   node *t,*p;
   t=new node;
   if(t==NULL)
   {
   cout<<"stack is overflow";
   }
   else
   {
       p=top;
       t->data=x;
       t->next=top;
       top=t;
   }
}
char pop()
{
    node *p;
    int x=-1;
    if(top==NULL)
    cout<<"stack is underflow";
    else
    {
     p=top;
     x=p->data;
     top=top->next;
     delete p;
    }
    return x;
}
char stacktop()
{
  char x=-1;
  node *p;
  p=top;
  if(top==NULL)
  cout<<"stack is underflow";
  else
  {
    p=top;
    x=p->data;
  }
  return x;
}
int isempty()
{
    if(top==NULL)
    return 1;
    return 0;
}
int isfull()
{
    node *t=new node;
    if(t==NULL)
    return 1;
    return 0;
}
void display()
{
   struct node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}
 int oroperand(char x)
 {
     if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^'||x=='('||x==')')
     return 0;
     else
     return 1;
 }
 int outpre(char x)
 {
     if(x=='+'||x=='-')
     return 1;
     else if(x=='*'||x=='/')
     return 3;
     else if(x=='^')
     return 6;
     else if(x=='(')
     return 7;
    // else if(x==')')
     //return 0;
 }
 int inpre(char x)
 {
     if(x=='+'||x=='-')
     return 2;
     else if(x=='*'||x=='/')
     return 4;
     else if(x=='^')
     return 5;
     else if(x=='(')
     return 0;
     //else if(x==')')
     //return -1;
 }
 char *convertall(char *infixx)
 {
   char *postfixx=new char[strlen(infixx)];
   int i=0,j=0;
   while(infixx[i]!='\0')
   {

     if(oroperand(infixx[i]))
     postfixx[j++]=infixx[i++];
     else
     {
          if(infixx[i]==')')
        {
            i++;
           while(stacktop()!='(')
           {
               postfixx[j++]=pop();
           }
           pop();
        }
        else
        {
        if(outpre(infixx[i])>inpre(stacktop()))
         {
            push(infixx[i++]);
         }
         else
         {
             postfixx[j++]=pop();
         }
      }
        }
   }
   while(top!=NULL)
   {
       postfixx[j++]=pop();
   }
   postfixx[j]='\0';
   return postfixx;
 }
int main()
{
     char *infixx="((a+b)*c)-d^e^f";
     char *postfixx=convertall(infixx);
     cout<<"the postfixx is "<<postfixx;
}

*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue
{
    int size;
    int *Q;
    int front;
    int rear;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->front=-1;
    q->rear=-1;
    q->Q=new int[q->size];
}
void enqueue(struct queue *q,int x)
{
  if(q->rear==q->size-1)
  cout<<"queue is full";
  else
  {
      q->rear++;
      q->Q[q->rear]=x;
  }
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    cout<<"queue is empty";
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
int display(struct queue q)
{
  q.front=-1;
  for(int i=q.front+1;i<=q.rear;i++)
  {
   cout<<q.Q[i];
  }
}
int main()
{
   struct queue q;
   create(&q,5);
   enqueue(&q,2);
   enqueue(&q,4);
   enqueue(&q,6);
   enqueue(&q,8);
   enqueue(&q,10);
   display(q);
   cout<<"DELETED ELEMENT IS"<<dequeue(&q);
   return 0;
}
  */
  /* cIRCULAR QUEUE
  #include<iostream>
#include<stdlib.h>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->rear=q->front=0;
    q->Q=new int[q->size];
}
void enqueue(struct queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    cout<<"queue is full\n";
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->rear==q->front)
    cout<<"queue is empty\n";
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    int i=q.front+1;
    do
    {
    cout<<q.Q[i];
    i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    cout<<"\n";
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    //enqueue(&q,5);
    display(q);
    cout<<"deleted value: "<<dequeue(&q);
    cout<<"\n";
    display(q);

}
*/
/*
queue using linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
   struct node *t;
   t=new node;
   if(t==NULL)
   cout<<"Queue is full";
   else
   {
   t->data=x;
   t->next=NULL;
   if(front==NULL)
   front=NULL;
   t->next=front;
   front=t;
   }
}
int dequeue()
{
    struct node *p;
    int x=-1;
    if(front==NULL)
    cout<<"Queue is empty";
    else
    {
        p=front;
        x=p->data;
        front=front->next;
        delete p;
    }
    return x;
}
void display()
{
    struct node *p;
  p=front;
  while(p)
  {
      cout<<p->data;
      p=p->next;
  }
  cout<<"\n";
}
int main()
{
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    display();
    cout<<"DELETE ELEMENT"<<dequeue();
    cout<<"\n";
        cout<<"DELETE ELEMENT"<<dequeue();
    cout<<"\n";
    display();
    return 0;
}
*/
