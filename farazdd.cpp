/*#include<iostream>
using namespace std;
int main()
{
  int i,j;
    char A[]="HELLO";
   char b[6];
    for(i=0;A[i]!='\0';i++)
    {}
        i=i-1;
        cout<<" length (i) :"<<i;
        for(j=0;i>=0;i--,j++)
            b[j]=A[i];

    b[j]='\0';
    cout<<b;
}*/
/*#include<iostream>
using namespace std;
int main()
{
int i,temp,j;
char A[]="python";
//cout<<"enter";
for(i=0;A[i]!='\0';i++)
{
}
i=i-1;
cout<<i;
for(j=0;i>j;i--,j++)
{
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
cout<<A;

}

*/
#include<iostream>
using namespace std;
int main()
{
  char a[]="HELLO";
  char b[]="HELLOBILUBARBER";
  int i,j,k,m,flag=0;
  for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
  {
      if(a[i]!=b[j])
      {
          flag=1;
        break;
      }
  }


       }
       if(flag=1)
        cout<<"same";
       else
        cout<<"not same";
}
