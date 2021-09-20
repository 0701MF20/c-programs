#include <iostream>
using namespace std;
int findmax(int A[],int n)
{
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    return max;
}
void countsort(int A[],int n)
{
    int maxi;
    int *C;
    maxi=findmax(A,n);
    C=new int[maxi+1];
    for(int i=0;i<maxi+1;i++)
    {
        C[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        C[A[i]]++;
    }
    int i=0,j=0;
    while(i<maxi+1)
    {
        if(C[i]>0)
        {
         A[j++]=i;
         C[i]--;
        }
        else
        i++;
    }
}
int main()
{
    int A[]={3,3,4,6,8,6,7,10,4,9};
    int n=10;
    countsort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
        if(i<n-1)
        cout<<",";
    }
    return 0;
}
