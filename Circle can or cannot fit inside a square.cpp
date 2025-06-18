#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter radius of the circle:";
    cin>>a;
    cout<<"Enter length of the square:";
    cin>>b;
    c=3.14*(a*a);
    e=b*b;
    if(e>c)
    {
        cout<<"Circle can fit inside the square";
    }
    else
    {
        cout<<"Circle cannot fit inside the square";
    }
}