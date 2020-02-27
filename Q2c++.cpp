#include<iostream>
using namespace std;
long int tts=0;
int hms_to_sec(int hrs, int min, int sec)
{
	tts=(hrs*60*60)+(min*60)+sec;
	return tts;
}
int main()
{	
	int h,m,s;
	cout<<"Enter Hours, Minutes and Seconds\n";
	cin>>h>>m>>s;
	cout<<"\nCalculatd time in seconds is:\n"<<hms_to_sec(h,m,s);
	return 0;
}
