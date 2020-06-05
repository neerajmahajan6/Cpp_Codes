#include<iostream>
using namespace std;
#include<iomanip>
class t
{
	int h,m,s,total,H,M,S;
	public:
		void get();
		void display();
		void cal();
};
void t::get()
{
	cout<<"\nHours? ";
	cin>>h;
	cout<<"\nMinutes? ";
	cin>>m;
	cout<<"\nSeconds? ";
	cin>>s;
}
void t::cal()
{
	total=h*3600+m*60+s;
}
void t::display()
{
	cout<<"The time is = "<<setfill('0')<<h<<":"<<setfill('0')<<m<<":"<<setfill('0')<<s;
	cout<<"Time in total seconds: "<<total;
}

int main()
{
	t time;
	time.get();
	time.cal();
	time.display();
	return 0;
}
