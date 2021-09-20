#include <iostream>
#include <conio.h>
#include <cstdio>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={2,3};
    r.length=4;
    r.breadth=8;
    cout<<"Area of Rectangle\n"<<r.length*r.breadth;
        return 0;
}
