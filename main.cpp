/*#include <iostream>
using namespace std;
class element
{
    public:
    int i;
    int j;
    int x;
};
class sparse
{
    private:
    int m;
    int n;
    struct element *e;
    void read()
    {

    }
}
int main()
{
    cout<<"Hello World";

    return 0;
}
*//*Sparse Matrix using C++
#include <iostream>
using namespace std;
class Element
{
public:
int i;
int j;
int x;
};
class Sparse
{
private:
int m;
int n;
int num;
Element *ele;
public:
Sparse(int m,int n,int num)
{
this->m=m;
this->n=n;
this->num=num;
ele=new Element[this->num];
}
~Sparse()
{
delete [] ele;
}
Sparse operator+(Sparse &s);
friend istream & operator>>(istream &is,Sparse &s);
friend ostream & operator<<(ostream &os,Sparse &s);
};
Sparse Sparse::operator+(Sparse &s)
{
int i,j,k;
if(m!=s.m || n!=s.n)
return Sparse(0,0,0);
Sparse *sum=new Sparse(m,n,num+s.num);
i=j=k=0;
while(i<num && j<s.num)
{
if(ele[i].i<s.ele[j].i)
sum->ele[k++]=ele[i++];
else if(ele[i].i > s.ele[j].i)
sum->ele[k++]=s.ele[j++];
else if(ele[i].j<s.ele[j].j)
sum->ele[k++]=ele[i++];
else if(ele[i].j > s.ele[j].j)
sum->ele[k++]=s.ele[j++];
else
{
sum->ele[k]=ele[i];
sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
}
}
for(;i<num;i++)
sum->ele[k++]=ele[i];
for(;j<s.num;j++)
sum->ele[k++]=s.ele[j];
sum->num=k;
return *sum;
}
istream & operator>>(istream &is,Sparse &s)
{
cout<<"Enter non-zero elements";
for(int i=0;i<s.num;i++)
cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
return is;
}
ostream & operator<<(ostream &os,Sparse &s)
{
int k=0;
for(int i=0;i<s.m;i++)
{
for(int j=0;j<s.n;j++)
{
if(s.ele[k].i==i && s.ele[k].j==j)
cout<<s.ele[k++].x<<" ";
else
cout<<"0 ";
}
cout<<endl;
}
return os;
}
int main()
{
Sparse s1(5,5,1);
Sparse s2(5,5,1);
cin>>s1;
cin>>s2;
Sparse sum=s1+s2;
cout<<"First Matrix"<<endl<<s1;
cout<<"Second MAtrix"<<endl<<s2;
cout<<"Sum Matrix"<<endl<<sum;
return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
struct term
{
    int Exp;
    int coeff;
};
struct poly
{
    int n;
    struct term *t;
};
int main()
{
struct poly p;
cout<<"ENTER THE NON ZERO TERM : ";
cin>>p.n;
p.t=new term[p.n];
for(int i=0;i<p.n;i++)
{
 cout<<"enter the data "<<i+1;
 cout<<"\nEnter the coefficient";
 cin>>p.t[i].coeff;
 cout<<"\n";
 cout<<"Enter the exponent";
 cin>>p.t[i].Exp;
 cout<<"\n";
}
int x;
char sum=*int;
for(int i=0;i<p.n;i++)
{
 sum=sum+(p.t[i].coeff)*pow(x,p.t[i].Exp);
}
cout<<"sum of a polynomial: "<<sum;
return 0;
}*/
#include<iostream>
#include<math.h>
using namespace std;
struct term
{
    int Exp;
    int coeff;
};
struct poly
{
    int n;
    struct term *t;
};
int main()
{
struct poly p;
cout<<"ENTER THE NON ZERO TERM : ";
cin>>p.n;
p.t=new term[p.n];
for(int i=0;i<p.n;i++)
{
 cout<<"enter the data "<<i+1;
 cout<<"\nEnter the coefficient";
 cin>>p.t[i].coeff;
 cout<<"\n";
 cout<<"Enter the exponent";
 cin>>p.t[i].Exp;
 cout<<"\n";
}
 char x;
for(int i=0;i<p.n;i++)
{
 int k=0;
 cout<<p.t[i]<<"x"<<coeff*pow(x,p.t[i].Exp);
 ++k;
 if(k<p.n)
 cout<<"+";
}
return 0;
}
