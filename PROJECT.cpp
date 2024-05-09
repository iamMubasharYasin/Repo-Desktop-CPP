#include<iostream>
#include<iomanip>
using namespace std;
void line();
void star();
struct cricketer
{
	char name[15];
	int runs;
	int innings;
	int tno;
	float avg;
};
int main()
{
	int runs,innings,i;
	float avg;
	cricketer rec[5];
	cout<<"Enter 5 Records including following details\n 1) Player Name\n 2) Runs\n 3) Innings\n 4) Times not out\n";
	for(i=0;i<2;i++)
	{
		cout<<"Enter Player Name";
		cin>>rec[i].name;
		cout<<"Enter Runs";
		cin>>rec[i].runs;
		cout<<"Enter Innings";
		cin>>rec[i].innings;
		cout<<"Enter Time Not Out";
		cin>>rec[i].tno;
		rec[i].avg=float(rec[i].runs)/rec[i].innings;
		
	}
	cout<<setw(49)<<"CRICKETER'S TABLE\n";
	line();
	cout<<setw(15)<<"Players Name"<<setw(15)<<"Runs"<<setw(15)<<"Innings"<<setw(20)<<"Times not out"<<setw(12)<<"Average\n";
	line();
	for(i=0;i<5;i++)
	{
		cout<<setw(15)<<rec[i].name<<setw(15)<<rec[i].runs<<setw(12)<<rec[i].innings<<setw(18)<<rec[i].tno<<setw(16)<<rec[i].avg<<endl;
	}		

line();
	cout<<endl<<endl<<endl;
	star();
	cout<<setw(43)<<"Finish\n";
	star();
}
void line()
{
	for(int i=1;i<41;i++)
	cout<<"--";
	cout<<"\n";
}
void star()
{
	for(int i=1;i<41;i++)
	cout<<"**";
	cout<<"\n";
}
