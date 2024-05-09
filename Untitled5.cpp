#include<iostream>
using namespace std;
int main()
{
	/*int choice=1;
	while(choice==1)
	{
		
	int marks;
	cout<<"Enter Your Marks";
	cin>>marks;
	cout<<"Result is "<<(marks>40 ? "Pass" : "Fail");//conditional Operator
	cout<<endl;
	cout<<"Do you want to Continue\nPress 1 to Continue or any other key to exit";
	cin>>choice;
	//cout<<choice;
}*/
	for(int j=0;j<80;j++)
	{
		char ch=(j%8) ? "/":"x";
		cout<<ch;
	}
}