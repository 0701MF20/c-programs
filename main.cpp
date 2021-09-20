/*#include <iostream>
using namespace std;
struct rectangle
{
  int length;
  int breadth;
};
  void setdimension(struct rectangle *r,int l,int b)
  {
   r->length=l;
   r->breadth=b;
  }
  int area(struct rectangle r)
  {
      return r.length*r.breadth;
  }
  void changelen(struct rectangle *r,int l)
  {
      r->length=l;
  }
  void showdimen(struct rectangle *r)
  {
      cout<<"length:"<<r->length;
      cout<<"breadth:"<<r->breadth;
  }
int main()
{
    struct rectangle r;
    setdimension(&r,2,7);
    changelen(&r,5);
    showdimen(&r);
    area(r);
    return 0;
}
*/
#include<iostream>
void fun(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"integer"<<a[i];
    }
}
int main()
{
    int a[5]={5,8,9,5,3};
    fun(a,5);
    return 0;

}
