#include<iostream>
using namespace std;
int main()
{
    int i,number;
    do
    {
    	cout<<"\n Enter a number";
    	cin>>number;
    	i=1;
    	do
    	{
    		cout<<"\n"<<number<<" * "<<i<<" = "<<number*i;
    		i++;
		}while(i<=10);
	 }while (number<=20);
return 0;
	
}
