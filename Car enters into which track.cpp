#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	int cars;
	cout<<"Enter the number of Road A:";
	cin>>a;
	cout<<"Enter the number of Road B:";
	cin>>b;
	cout<<"Enter the number of Road C:";
	cin>>c;
	cout<<"Enter the number of the Cars:";
	cin>>d;
	if (a%2==0)
	    cout<<"Car 1 goes into road A";
    else if(b%2==0)
	    cout<<"Car 1 goes into road B";
	else if(c%2==0)
	    cout<<"Car 1 goes into road C";
    else
	    cout<<"No path exist";
}