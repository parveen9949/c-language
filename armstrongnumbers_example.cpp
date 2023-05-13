//armstrong numbers
#include<iostream>
using namespace std;

int main()
{
	int j,limit,n;
	
		int duplicate;
		int r;
		int sum_of_cubes_digits=0; 
	cout<<"\n Enter limit";
	cin>>limit;
	j=1;
	while(j<=limit)
	{
		sum_of_cubes_digits=0; 
		n=j;
		duplicate=j;
		while(n>0)  
		{
			r=n%10;
			sum_of_cubes_digits=sum_of_cubes_digits+(r*r*r);
			n=n/10;
		}
		if (sum_of_cubes_digits==duplicate )
		{
			cout<<"\n "<<duplicate<<" is armstrong number";
		}
	
		j++;
		
	}
	
}
