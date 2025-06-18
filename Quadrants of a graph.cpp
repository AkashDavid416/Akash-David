#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter x coordinates:";
    cin>>a;
    cout<<"Enter y coordinates:";
    cin>>b;
    if(a>0 && b>0)
    {
        cout<<"1st Quadrant";
    }
    else if(a<0 && b>0)
    {
        cout<<"2nd Quadrant";
    }
     else if(a<0 && b<0)
    {
        cout<<"3rd Quadrant";
    }
    else
    {
        cout<<"4th Quadrant";
    }
}