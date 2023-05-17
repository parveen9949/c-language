//DAY EXAMPLE
#include<iostream>
using namespace std;
int main()
{
    int day_number;
    do
    {
    	cout<<"\n Enter day number";
    	cin>>day_number;
		switch (day_number)
		{
			case 1:
				cout<<"Sunday";
				break;
			case 2:
				cout<<"Monday";
				break;
			case 3:
				cout<<"TuesDay";
				break;
			case 4:
				cout<<"Wednesday";
				break;
			case 5:
				cout<<"Thrusday";
				break;
			case 6:
				cout<<"Friday";
				break;
			case 7:
				cout<<"Saturday";
				break;
			default:
				cout<<"\n Invalid Day";
		}	
	} 	while (day_number<=7);
return 0;
	
}
