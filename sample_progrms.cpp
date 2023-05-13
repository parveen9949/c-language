/*
//prime number
#include<iostream>
using namespace std;
int main()
{
	int j,limit;
	int i,r;
	int fact;
	cout<<"\n enter limit";
	cin>>limit;
	j=1;
	while(j<=limit)
	{
        	fact=0;
    	     i=1;
	  while(i<=j)
	    {
	    	r=j%i;
	    	if(r==0)
	    	{
	    		fact++;
			}
			i++;
		}
		if(fact==2)
		{
			cout<<"\n j is"<<j;
		}
		j++;
	}
}
*/
//armstrong num
#include<iostream>
using namespace std;
int main()
{
	int j,limit,n;
	int i,r;
	int duplicate;
	int sum_of_cubes_digits=0;
	cout<<"\n enter limit";
	cin>>limit;
	j=1;
	while(j<=limit)
	{
		sum_of_cubes_digits=0;
		duplicate=j;
		n=j;
		while(n>0)
		{
			r=n%10;
			sum_of_cubes_digits=sum_of_cubes_digits+(r*r*r);
			n=n/10;
			
	
		    if(sum_of_cubes_digits==duplicate)
			{
				cout<<"\n"<<duplicate<<"armstrong" ;
	     	}
			j++;
		
	   }
		
	}
}
