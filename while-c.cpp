//multication by given number
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int n;
	cout<<"\n enter n value";
	cin>>n;
	while(i<=10)
	{
		cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
		i++;
	}
	cout<<"\n end the loop";
}
