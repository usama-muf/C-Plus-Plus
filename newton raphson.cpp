#include<iostream>
#include<math.h>
#define fz z*z*z*z-z-10
using namespace std;
int main()
{	double a,b,fa,fb;
int n;
	double x[n],fx[n],deffx[n];
	
		cout<<"Enter upper and lower guess\n";
		statement:
		cin>>a>>b;
	fa=	pow(a,4)-a-10;
	fb=	pow(b,4)-b-10;
	if((fa*fb)<0)	
		{
		
		x[0]=(a+b)/2;
		for (n=0;n<10;n++)
		{	fx[n]=pow(x[n],4)-x[n]-10;
			deffx[n]=(pow(x[n],3)*4)-1;
			x[n+1]=x[n]-(fx[n]/deffx[n]);	
			
		}
		cout<<"the root of the equation x^4-x-10 is : "<<x[10]<<"\n";
		}
		else 
		{cout<<"ReEnter guess roots:\n ";
		goto statement;
		}
		
		return 0;
}
