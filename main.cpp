/*#include <iostream>
#include<conio.h>
using namespace std;*/
/*int x=0;
int fun1(int n)
{
    //static int x=0;
    if(n>0)
       {
           x++;
      //  cout<<"print\a"<<n;
    return fun1(n-1)+x;
    //cout<<"print"<<n;
       }
       return 0;

}
/*void swap4(int a,int b)
{
    int y,x,t;
    t=x;
    x=y;
    y=t;
    cout<<"\a"<<x;
    cout<<"\a"<<y;
}
int main()
{
    int d=5;
    int result=fun1(d);
    cout<<result;
    result=fun1(d);
    cout<<result;

    //swap4(3,7);
    //cout << "Hello world!" << endl;
    //return 0;
}
*/
/*int main()
{
    int a,b,c,d,e;
    cout<<"Enter the nos 1,2,3 respectively\n";
    cin>>a>>b>>c>>d>>e;
    int d=(a>b?(a<c?c:a):(b>c?b:c));
    int m=(a>b?(b<c?b:c):(a<c?a:c));
    int n=(a>b?(a>c?(a>d?(a>e?a:e):d):c):(b>c?(b>d?(b>e?b:e):d):c));

    cout<<"the value of d is\n"<<d;
    cout<<"the lowest nos among them"<<m;
    cout<<"chakde"<<n;*/

   /* int funA(int n)
    {
     if(n>0)
     {
     cout<<n;
     funB(n-1);
    }
    return 0;
    }
    int funB(int n)
    {
        if(n>0)
        {
            cout<<n;
            funA(n/2);
        }
        return 0;
    }
    int main()
    {
        int n=3;
        funA(n);
        return 0;
    }
*/
/*int pow(int m,int n)
{
    if(n==0)
    return 1;
    else
    if(n>0)
    {
        return m*pow(m,n-1);
    }

}*/
/*int pow(int m,int n)
{
 if(n==0)
  return 1;
  if(n>0)
  {
  if(n%2==0)
  {
      return pow((m*m),(n/2));
  }
      else
      return m*pow((m*m),((n-1)/2));

  }
    }

    int main()
{
    int r=pow(3,4);
    cout<<r;
    return 0;
}
*/
/*int main()
{

   int x,prime=1;
   cout<<"Enter the value of x: ";
   cin>>x;
   for(int p=2;p<=x;p++)
   {
   for(int i=2;i<p;i++)
   {
       if(p%i==0)
       {
        prime=0;
        cout<<"THe NON PRIME NOS: "<<p<<endl;
       }
   }
   if(prime==1)
    cout<<"prime nos"<<p<<endl;

   //cout<<"the prime nos: "<<p<<endl;
   }*/
   /*if(prime==1)
    {
        cout<<"PRIME NOS";
    }
   else
   {
    cout<<"NOT prime nos";
   }*/

//    return 0;
//}

/*int main()
{
 int x,count=0;
 cout<<"ENter the value of x: ";
 cin>>x;
 while(x>0)
 {
    if((x/10)>0)
     {
         count++;
     }
 }
 cout<<"nos of digit "<<count;
    //return 0;
}
*/
/*int e(int x,int n)
{
    static int f=1,p=1,r;
    if(n==0)
    {
        return 1;
    }
    else
        r=e(x,n-1);
    p=p*x;
    f=f*n;
    return 1+p/f;
}
int main()
{
    int x=3,n=3;
    int r=e(x,n);
    cout<<"the taylor series is: "<<r;
    return 0;
}
*/
/*int e(int x,int n)
{
    int s=1;
    if(n==0)
        return 1;
    else
    for(int i=1;i<=n;i++)
    {
       s=1+x/n*s;
    }
    return s;
}
int main()
{
    int x=6,n=6;
    int r=e(x,n);
    cout<<"taylor series: "<<r;
    return 0;
}
*/
/*int e(int x,int n)
{
  int static s=1;
  if(n==0)
    return s;
  else
  s=1+x/n*s;
  return e(x,n-1);
  //return s;
  }
int main()
{

//    clrscr();
    int x=3,n=3;
    int r=e(x,n);
    cout<<"taylor series of "<<r;
    return 0;
}
*/
/*t fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
  return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"enter n....";
    cin>>n;
    cout<<"the result is... "<<fib(n);
    return 0;

}

int main()
{
   int n,t0=0,t1=1,s;
   cout<<" enter the n... ";
   cin>>n;
   if(n<=1)
    return n;
   for(int i=2;i<=n;i++)
   {
       s=t0+t1;
       t0=t1;
       t1=s;
   }
   cout<<"the result is.... "<<s;
}
int fib(int n)
{
   int t0=0,t1=1,s;
   if(n<=1)
    return n;
   for(int i=2;i<=n;i++)
   {
       s=t0+t1;
       t0=t1;
       t1=s;
   }
   return s;
   }
int main()
{
    int n;
    cin>>n;
    cout<<"result..."<<fib(n);
    return 0;
}*/
/*int f[17];
int fib(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
        if(f[n-1]==-1)
        f[n-1]=fib(n-1);
    if(f[n-2]==-1)
        f[n-2]=fib(n-2);
    return fib(n-1)+fib(n-2);/
       /* for(int i=0;i<n;i++)
        {
            cout<<"the series obtained is ...";
            cout<<f[i];
            cout<<",";
        }*/
/*
}
int main()
{
    int n=7;
    cout<<"the result is..."<<fib(n);
    //cout<<"the series is.... "<<sere();
    return 0;
}*/
/*#include<iostream.h>
#include<conio.h>
int validitate(char *name)
{
    for(int i=0;n[i]!="/0";i++)
    {
        if(!(n[i]>=65&&n[i]<=90)&&!(n[i]>=97&&n[i]<=122)&&!(n[i]>=48&&)
    }

}
int main()
{
    char *n="Welcome";

}
*/
#include<iostream>
using namespace std;
int main()
{
    char n[]="HELLO";
    int i;
    for(i=0;n[i]!='\0';i++)
    {
     //if(n[i]>=65||n[i]<=90)
     //n[i]=n[i]+32;
    }

    cout<<"name"<<i;
    return 0;
}





















