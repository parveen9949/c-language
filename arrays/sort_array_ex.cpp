// Sorting the array elements   
#include<iostream>
using namespace std;
int main()
{
	int marks[6];
	int i,j,temp;
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
	    
	for(i = 0; i < 6; i++) {
      for(j = i+1; j < 6; j++) {
         if(marks[i] > marks[j]) {  
            temp = marks[i];                // temp=44
            marks[i] = marks[j];            // marks[0]=32
            marks[j] = temp;                // marks[3]=44
         }
      }
   }
   
   	cout<<"\n Marks in 6 subjects after sorting are \n";
	for(i=0;i<6;i++)
	{
		cout<<"\n "<<"Marks in "<< i+1 <<"  Subject is "<<marks[i];
	}
}
