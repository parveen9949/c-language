//bitwise operator
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<((a<b)&(a>b))<<"\n";
	cout<<((a<b)|(a>b))<<"\n";
	cout<<((a<b)^(a>b))<<"\n";
	cout<<((a<b)<<(a>b))<<"\n";
	cout<<((a<b)>>(a>b))<<"\n";
}
