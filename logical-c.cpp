//logical operator
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n enter 2 elemnets values";
	cin>>a>>b;
	cout<<((a>b)&&(a<b)),"\n";
	cout<<((a>b)||(a<b)),"\n";
	cout<<~(a<b),"\n";
}
