//incrementand decrement operator
#include<iostream>
using namespace std;
int main()
{
	int a=1,b,c;
	b=a--;
	c=a+b;
	if(a==b)
	{
		++a;
		b--;
	}
	
	cout<<"\n a is"<<a;
	cout<<"\n b is"<<b;
	cout<<"\n c is"<<c;
	
}
