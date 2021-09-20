/*#include<iostream>
using namespace std;
int main()
{
    char name[]="CameL";
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65&&name[i]<=90)
        name[i]=name[i]+32;
        else if(name[i]>=97&&name[i]<=122)
            name[i]=name[i]-32;
        }
    cout<<name;
}*/
/*#include<iostream>
using namespace std;
int valide(char *n)
{ int i;
    for(i=0;n[i]!='\0';i++)
    {
        if(!(n[i]>=65&&n[i]<=90)&&!(n[i]>97&&n[i]<=122)&&!(n[i]>=48&&n[i]<=57))
        {
            //cout<<"invalid";
           return 0;
        }
    }
   //cout<<"valid";
//    return 0;
}
int main()
{
    char *n="hillela23AD";
    if(valide(n))
        cout<<"valid";
    else
        cout<<"invalid";
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    char a[]="HELPindfgg";
    char b[]="help";
    int i,j,k;
    char ch;
    cout<<"ENTER THE CASE IN WHICH YOU WOULD LIKE TO PROCEED    :";
    cin>>ch;

    switch(ch)
    {
    case 'l':
        {
             for(k=0;a[k]!='\0';k++)
  {
      if(a[k]>=65&&a[k]<=90)
        a[k]=a[k]+32;
  }
  for(k=0;b[k]!='\0';k++)
  {
      if(b[k]>=65&&b[k]<=90)
        b[k]=b[k]+32;
  }
break;
        }
    case 'u':
        {
            for(k=0;a[k]!='\0';k++)
  {
      if(a[k]>=97&&a[k]<=122)
        a[k]=a[k]-32;
  }
  for(k=0;b[k]!='\0';k++)
  {
      if(b[k]>=97&&b[k]<=122)
        b[k]=b[k]-32;
  }
  break;
        }
    default:
        cout<<"\nREPORT!  IT WILL PROCEED AS IT IS";

    }

    for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
    {
        if(a[i]!=b[j])
            break;
    if(a[i]==a[j])
   {}
    }
    if(a[i]=='\0'&&b[j]=='\0')

        cout<<"\n    EQUAL";
    else
        cout<<"\n  NOT EQUAL";

}
*/
#include<iostream>
using namespace std;
int main()
{
    char a[]="hello";
    char b[6];
    int k,m;
    for(k=0;a[k]!='\0';k++)
    {}
    k=k-1;
    for(m=0;k>=0;k--,m++)
    {
        b[m]=a[k];
    }
    b[m]='\0';

for(k=0,m=0;a[k]!='\0'&&b[m]!='\0';k++,m++)
{
    if(a[k]!=b[m])
        break;
    if(a[k]==b[m])
    {}
}
if(a[k]=='\0'&&b[m]=='\0')
   {
       cout<<"  EQUAL";
   }
else
{
    cout<<"  NOT EQUAL ";
}
}
/*
#include<iostream>
using namespace std;
int main()
{
    char a[]="heelttkk";
    int i,j,temp,k;
    for(i=0;a[i]!='\0';i++)
    {
    }
    i=i-1;
    temp=i;
    for(j=0;j<=i-1;j++)
    {
     for(k=j+1;k<temp;k++)
     {
         if(a[j]==a[k])
         {
             cout<<a[k];
             cout<<",";
             break;
         }

     }

    }
}


*/
#include <iostream>

using namespace std;

/*int main()
{
    char a[]="thiruvanthampuram";
    int h[26]={0};
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>1)
        {
        cout<<i+97;
        cout<<"(";
        char c=(char) i+97;
        cout<<c;
        cout<<")";
        cout<<"-"<<h[i];
        cout<<endl;
        }
    }
    return 0;
}
*/
int main()
{
    char a[]="medical";
    char b[]="decimal";
    int h[26]={0};
    int i,j,k;
    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]+=1;
    }
    for(j=0;b[j]!='\0';j++)
    {
        h[b[j]-97]-=1;
    }
    for(k=0;k<26;k++)
    {
        if(h[k]<0)
        {
            cout<<"NOT ANAGRAM";
            break;
        }
    }
    if(h[k]=='\0')
    {
        cout<<"ANAGRAM";
    }
}

/*#include <iostream>
using namespace std;
class diagonal
{
    private:
    int n;
    int *A;
    public:
    diagonal()
    {
        n=2;
        A=new int[2];
    }
    diagonal(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~diagonal()
    {
        delete []A;
    }
};
void diagonal::set(int i,int j,int x)
{
    if(i==j)
    A[i]=x;
}
int diagonal::get(int i,int j)
{
    if(i==j)
    return A[i];
    else
    return 0;
}
void diagonal::display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
    if(i==j)
    cout<<A[i];
    else
    cout<<"0";
        }
        cout<<"\n";
    }
}
int main()
{
    int n,x;
 cout<<"Enter the dimension";
 cin>>n;
 diagonal d(n);
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         cout<<"enter : ";
         cin>>x;
         d.set(i,j,x);
     }
 }
 d.display();
}
*/
#include<iostream>
using namespace std;
class lowerm
{
    private:
    int n;
    int *A;
    public:
    lowerm()
    {
     n=2;
     A=new int[2];
    }
    lowerm(int n)
    {
     this->n=n;
     A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~lowerm()
    {
     delete []A;
    }
};
    void lowerm::set(int i,int j,int x)
    {
        if(i>=j)
        A[(i*(i+1))/2+j]=x;
    }
    int lowerm::get(int i,int j)
    {
      if(i>=j)
        return A[(i*(i+1))/2+j];
        else
        return 0;
    }
    void lowerm::display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            if(i>=j)
            cout<<A[(i*(i+1))/2+j];
            else
            cout<<"0";
        }
        cout<<"\n";
    }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        lowerm d(n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the element";
                cin>>x;
                d.set(i,j,x);
            }
        }
        d.display();
        return 0;
    }
/*#include<iostream>//column major
using namespace std;
class lowerm
{
    private:
    int n;
    int *A;
    public:
    lowerm()
    {
     n=2;
     A=new int[2];
    }
    lowerm(int n)
    {
     this->n=n;
     A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~lowerm()
    {
     delete []A;
    }
};
    void lowerm::set(int i,int j,int x)
    {
        if(i>=j)
        A[(n*(j-1)-((j-2)*(j-1))/2)+(i-j)]=x;
    }
    int lowerm::get(int i,int j)
    {
      if(i>=j)
        return A[(n*(j-1)-((j-2)*(j-1))/2)+(i-j)];
        else
        return 0;
    }
    void lowerm::display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            if(i>=j)
            cout<<A[(n*(j-1)-((j-2)*(j-1))/2)+(i-j)];
            else
            cout<<"0";
        }
        cout<<"\n";
    }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        lowerm d(n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the element";
                cin>>x;
                d.set(i,j,x);
            }
        }
        d.display();
        return 0;
    }

*/
/*#include<iostream>//column major matrix
using namespace std;
class uperm
{
    private:
    int n;
    int *A;
    public:
    uperm()
    {
     n=2;
     A=new int[2];
    }
    uperm(int n)
    {
     this->n=n;
     A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~uperm()
    {
     delete []A;
    }
};
    void uperm::set(int i,int j,int x)
    {
        if(i<=j)
        A[(j*(j+1))/2+i]=x;
    }
    int uperm::get(int i,int j)
    {
      if(i<=j)
        return A[(j*(j+1))/2+i];
        else
        return 0;
    }
    void uperm::display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            if(i<=j)
            cout<<A[(j*(j+1))/2+i];
            else
            cout<<"0";
        }
        cout<<"\n";
    }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        uperm d(n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the element";
                cin>>x;
                d.set(i,j,x);
            }
        }
        d.display();
        return 0;
    }
*/
/*#include<iostream>//row major matrix
using namespace std;
class uperm
{
    private:
    int n;
    int *A;
    public:
    uperm()
    {
     n=2;
     A=new int[2];
    }
    uperm(int n)
    {
     this->n=n;
     A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~uperm()
    {
     delete []A;
    }
};
    void uperm::set(int i,int j,int x)
    {
        if(i<=j)
        A[(n*(j-1))-((j-2)*(j-1))/2+(j-i)]=x;
    }
    int uperm::get(int i,int j)
    {
      if(i<=j)
        return A[(n*(j-1))-((j-2)*(j-1))/2+(j-i)];
        else
        return 0;
    }
    void uperm::display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            if(i<=j)
            cout<<A[(n*(j-1))-((j-2)*(j-1))/2+(j-i)];
            else
            cout<<"0";
        }
        cout<<"\n";
    }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        uperm d(n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the element";
                cin>>x;
                d.set(i,j,x);
            }
        }
        d.display();
        return 0;
    }
*/
/*#include<iostream>  //SYMMETRIC MATRIX
using namespace std;
class uperm
{
    private:
    int n;
    int *A;
    public:
    uperm()
    {
     n=2;
     A=new int[2];
    }
    uperm(int n)
    {
     this->n=n;
     A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~uperm()
    {
     delete []A;
    }
};
    void uperm::set(int i,int j,int x)
    {
        if(i<=j)
        A[(n*(j-1))-((j-2)*(j-1))/2+(j-i)]=x;
    }
    int uperm::get(int i,int j)
    {
      if(i<=j)
        return A[(n*(j-1))-((j-2)*(j-1))/2+(j-i)];
        else
        return A[(n*(i-1))-((i-2)*(i-1))/2+(i-j)];
    }
    void uperm::display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            if(i<=j)
            cout<<A[(n*(j-1))-((j-2)*(j-1))/2+(j-i)];
            else
            cout<<A[(n*(i-1))-((i-2)*(i-1))/2+(i-j)];
        }
        cout<<"\n";
    }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        uperm d(n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the element";
                cin>>x;
                d.set(i,j,x);
            }
        }
        d.display();
        return 0;
    }
    */
    /*#include<iostream>    //tridiagonal mtrix
using namespace std;
class tri
{
    private:
    int n;
    int *A;
    public:
    tri()
    {
     n=2;
     A=new int[2];
    }
    tri(int n)
    {
     this->n=n;
     A=new int[3*n-2];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~tri()
    {
     delete []A;
    }
};
    void tri::set(int i,int j,int x)
    {
     //int n;
        if(i-j==1)
            A[i]=x;
            else if(i==j)
        A[n-1+i]=x;
            else if(i-j==-1)
            A[2*n-1+i]=x;
    }
    int tri::get(int i,int j)
    {
        //int n;
        if(i-j==1)
        return A[i];
        else if(i==j)
        return A[n-1+i];
        else if(i-j==-1)
        return A[2*n-1+i];
    }
    void tri::display()
    {
        //int n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
         if(i-j==1)
        cout<<A[i];
        else if(i==j)
         cout<<A[n-1+i];
        else if(i-j==-1)
        cout<<A[2*n-1+i];
        else
        cout<<"0";
        }
        cout<<"\n";
        }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        tri t(n);
         cout<<"Enter the element";
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                cin>>x;
                t.set(i,j,x);
            }
        }
        t.display();
        return 0;
    }
*/
/*#include<iostream>
using namespace std;
class tri
{
    private:
    int n;
    int *A;
    public:
    tri()
    {
     n=2;
     A=new int[2];
    }
    tri(int n)
    {
     this->n=n;
     A=new int[3*n-2];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~tri()
    {
     delete []A;
    }
};
    void tri::set(int i,int j,int x)
    {
     //int n;
        if(i-j==1)
            A[i]=x;
            else if(i==j)
        A[n-1+i]=x;
            else if(i-j==-1)
            A[2*n-1+i]=x;
    }
    int tri::get(int i,int j)
    {
        //int n;
        if(i-j==1)
        return A[i];
        else if(i==j)
        return A[n-1+i];
        else if(i-j==-1)
        return A[2*n-1+i];
    }
    void tri::display()
    {
        //int n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
         if(i-j==1)
        cout<<A[i];
        else if(i==j)
         cout<<A[n-1+i];
        else if(i-j==-1)
        cout<<A[2*n-1+i];
        else
        cout<<"0";
        }
        cout<<"\n";
        }
    }
    int main()
    {
        int n;
        int x;
        cout<<"ENTER THE DIMENSION: ";
        cin>>n;
        tri t(n);
         cout<<"Enter the element";
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                cin>>x;
                t.set(i,j,x);
            }
        }
        t.display();
        return 0;
    }
*/
/*

#include <iostream>

using namespace std;
class topelitz
{
    private:
    int n;
    int *A;
    int *B;
    public:
    topelitz()
    {
        n=2;
        A=new int[2];
        B=new int[4];
    }
    topelitz(int n)
    {
        this->n=n;
        A=new int[2*n-1];
        B=new int[n*n];

    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~topelitz()
    {
        delete []A;
    }
};
void topelitz::set(int i,int j,int x)
{
    if(j>=i)
    A[j]=x;
    else if(i<j)
    A[n+j-i-1]=x;
}
int topelitz::get(int i,int j)
{
    if(j>=i)
    return A[j-1];
    else if(i<j)
    return A[n+i-j-1];
}
void topelitz::display()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                A[j-1]


        }
    }
    }
}
}
*/
