// Min and Max elements in array
#include<iostream>
using namespace std;
int main()
{
	int marks[6];
	int i;
	int min_marks,max_marks;
	cout<<"\n Enter  marks in 6 subjects";
	for(i=0;i<6;i++)
	{
		cin>>marks[i];
	}
	
	cout<<"\n Marks in 6 subjects are \n";
	for(i=0;i<6;i++)
	{
		cout<<"\n "<<"Marks in "<< i+1 <<"  Subject is "<<marks[i];
	}
	    
	max_marks=marks[0]; 
	for(i=1;i<6;i++)  
	{	
    	if (max_marks<marks[i])   
		{
	    	max_marks=marks[i];  
		}
	}

cout<<"\n max marks is"<<max_marks;

min_marks=marks[0]; 
	for(i=1;i<6;i++)  
	{
    	if (min_marks>marks[i])   
		{	
	    	min_marks=marks[i];   
		}
	}	
	cout<<"\n minimum marks is"<<min_marks;
}	
