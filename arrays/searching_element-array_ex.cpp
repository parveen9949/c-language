// Searching a element in the Array
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
	    
	int search_marks;
	cout<<"\n Enter marks to be search";
	cin>>search_marks;
	int found=0;
	for(i=0;i<6;i++)
	{	
  		if(marks[i]==search_marks)
  		{
    		found=1;
        }			
	}

	if (found==1)
	{
   		cout<<search_marks<<" present in the list";
	}
	else
	{
   		cout<<search_marks<<" is not in the list";
	}
}
