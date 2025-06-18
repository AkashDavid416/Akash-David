#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a Number One:";
    cin>>a;
    cout<<"Enter a Number Two:";
    cin>>b;
    cout<<"Enter a Number Three:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is the greatest number";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the greatest number";
    }
    else
    {
        cout<<c<<" is the greatest number";
    }
}