#include<iostream>
using namespace std;

inline int max(int num1, int num2, int num3)
{
	if(num1>num2&&num1>num3)
	return num1;
	if (num2>num1&&num2>num3)
	return num2;
	else 
	return num3;
}
int main()
{
	int n1,n2,n3;	
	cout<<"Enter 3 Numbers: \n ";
	cin>>n1>>n2>>n3;
	
	cout<<"\nMAXIMUM OF above NUMBERs IS: "<<max(n1,n2,n3)<<"\n";
	return 0;
	
}
