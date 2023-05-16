//ntural numbers 
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	int sum=0;
	cout<<"\n enter n value";
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"\n sum of "<<n<<" is "<<sum;
}
