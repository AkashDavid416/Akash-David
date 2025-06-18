#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter the weight that the boat can handle:";
    cin>>a;
    cout<<"Enter the number of adults:";
    cin>>b;
    cout<<"Enter the number of child:";
    cin>>c;
    d=b*75;
    e=c*30;
    if(a>=(d+e))
    {
        cout<<"The Boat is Stable";
    }
    else
    {
        cout<<"The Boat will Drown";
    }
}