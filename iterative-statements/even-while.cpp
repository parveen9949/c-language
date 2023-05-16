#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1; // loop counter variable
	cout<<"\n Enter a number";
	cin>>n;
	while(i<=n)  //condition 
	{
		if(i%2==0)
		{
			cout<<i<<"\n";
		}
		i++;
	}
}
