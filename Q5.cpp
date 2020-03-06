#include<iostream>
using namespace std;

class Time
{	
	int hour[2],min[2],sec[2];
	int add;
	public:
		int input();
		int add_time();
		int display_time();
}; 
int Time::input() 
{	int i;
	for(i=1;i<=2;i++)	
	{		cout<<"Enter hour , minutes, and seconds: \n";

		cin>>hour[i]>>min[i]>>sec[i];
		cout<<".........................................\n";
	}
}

int Time::add_time()
{
int tot_hr,tot_min,tot_sec;
tot_hr=hour[1]+hour[2];
tot_min=min[1]+min[2];
if(tot_min>60&&tot_min<120)
{tot_hr++;
tot_min-=60;
}
else
{
tot_hr+=2;
tot_min-=120;
}
tot_sec=sec[1]+sec[2];
if(tot_sec>60&&tot_sec<120)
{tot_min++;
tot_sec-=60;}
else
{
tot_min+=2;
tot_sec-=120;
}
return tot_hr;
return tot_min;
return tot_sec;
	
}
int Time::display_time()
{int tot_hr,tot_min,tot_sec;

	cout<<"\ntotal time is \n"<<tot_hr<<" hr"<<" :"<<tot_min<<" min"<<" :"<<tot_sec<<" sec"<<endl;
}
int main()
{
//	int hr[2],minut[2],second[2];
	cout<<"Enter time\n";
	
	Time t1;
	t1.input();
	t1.add_time();
	t1.display_time();
	return 0;
	
}
