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
	int fifty;
	int Hundreds;
	float avg;
};
int main()
{
	int runs,innings,i;
	float avg;
	cricketer rec[5];
	cout<<"\t\t\t\tEnter 5 Records including following details\n\n 1) Player Name\n 2) Runs\n 3) Innings\n 4) Times not out\n";
	for(i=0;i<2;i++)
	{
		cout<<endl;
		cout<<"Enter Player Name ";
		cin>>rec[i].name;
		cout<<"Enter Runs ";
		cin>>rec[i].runs;
		cout<<"Enter Innings ";
		cin>>rec[i].innings;
		cout<<"Enter Fifthy ";
		cin>>rec[i].fifty;
		cout<<"Enter Hundreds ";
		cin>>rec[i].Hundreds;
		cout<<endl;
		
		rec[i].avg=float(rec[i].runs)/rec[i].innings;
		line();
	}
	system("cls");
	cout<<endl;
	line();
	cout<<"\t\t\t\t\t\tCRICKETER'S TABLE\n";
	line();
	cout<<setw(15)<<"Players Name"<<setw(15)<<"Runs"<<setw(15)<<"Innings"<<setw(20)<<"Fifty"<<setw(12)<<"Hundreds"<<setw(12)<<"Average\n";
	line();
	for(int i=0;i<2;i++)
	{
		cout<<setw(15)<<rec[i].name<<setw(15)<<rec[i].runs<<setw(12)<<rec[i].innings<<setw(18)<<rec[i].fifty<<setw(18)<<rec[i].Hundreds<<setw(16)<<rec[i].avg<<endl;
	}		

line();
	cout<<endl<<endl<<endl;
	star();
	cout<<setw(43)<<"Finish\n";
	star();
}
void line()
{
	for(int i=1;i<65;i++)
	cout<<"--";
	cout<<"\n";
	
}
void star()
{
	for(int i=1;i<65;i++)
	cout<<"**";
	cout<<"\n";
}
