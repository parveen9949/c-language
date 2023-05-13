//polindrome 
#include<iostream>
using namespace std;

int main()
{
	int j,limit,n;
	int duplicate,r;
	int revers=0; // loop counter variable

	cout<<"\n Enter limit";
	cin>>limit;
	j=1;
	while(j<=limit)
	{
		n=j;
		revers=0;
		duplicate=n;
		while(n>0)  //condition 
		{
			r=n%10;      
			revers=revers*10+r;
			n=n/10;
		}
		if (revers==duplicate)
		{	
			cout<<"\n"<<duplicate<<" is polindrum";
		}
		j++;
		
	}
	
}
	
