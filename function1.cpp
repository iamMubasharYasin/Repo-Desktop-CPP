#include<iostream>
using namespace std;
//void max(int a,int b);
void line();
int main()
{
	label:
	int x,y;
	cout<<"Enter two Numbers";
	cin>>x>>y;
	line();
	goto label;
	//max(x,y);
	
}
void line()
{
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}
/*void max(int a,int b)
	{
		if(a>b)
		{
			cout<<a<<"Its a maximum ";
		}
		else
		{
			cout<<b<<"Its a maximum ";
		}
			 	}*/
			 	
	