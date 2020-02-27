#include<iostream>
using namespace std;

class acc_detail
{	public:
	char name[30];
	long int acc_no;
	char acc_type[8];
	double balance;
	
};
int assign(char n,long int accno, char type, double bal)
{
return n;
return accno;
return type;
return bal;
}
int deposit(int amt)
{
	
}
int main()
{	int n, accno,type,bal;
	cout<<"Enter Name of Employee :";
gets(n);
	cout<<"Enter Account Number of Employee :";
	cin>>accno;
	cout<<"Enter Account type of Employee :";
gets(type);
	cout<<"Enter balance of Employee :";
	cin>>bal;
	cout<<"Initial Values: "<<assign(n, accno,type,bal);
	return 1;
}
