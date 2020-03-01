#include<iostream>
#define fx x*x*x-47

using namespace std;
int main()
{	double g1,g2, tol,fg1,fg2,g3,fg3;
	step:
		cout<<"ENter upper and lower guess\n";
		cin>>g1>>g2;
		cout<<"Enter tolerable limit\n";
		cin>>tol;
		fg1=g1*g1*g1-47;
		fg2=g2*g2*g2-47;
		
		if((fg1*fg2)>0)
	{
		cout<<"REenter correct guess\n";
	goto step;
	}
	
	
	{
		g3=((g1*fg2)-(g2*fg1))/(fg2-fg1);
		
		fg3=g3*g3*g3-47;
		if((fg1*fg3)<0)
		{
			g2=g3;
		}
		
		else
		g1=g3;
	}
		cout<<g1<<"  "<<"  "<<g2<<"  "<<g3<<"  "<<fg1<<"  "<<fg2<<"  "<<fg3;
		
	return 0;
}
