#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class bank
{		public:

		int accno;
	char nm[50];

	char acctp[8];
	float bal;
	void init_val();
	void deposit();
	void withdraw();
	void display();
};
void bank::init_val()
{	
	cout<<"Enter Account Number of Employee :";
	cin>>accno;
	cout<<"Enter Name of Employee :";
	cin>>nm;
	cout<<"Enter Account type of Employee :";
	cin>>acctp;
	cout<<"Enter balance of Employee :";
	cin>>bal;
}

void bank::deposit()
{
	int depamt;
	cout<<"Enter amount to depositted :";
	cin>>depamt;
	bal=bal+depamt;
}
void bank::withdraw()
{
	int witamt;
	cout<<"Enter amount to be withdrawn";
	cin>>witamt;
	if(witamt>bal)
	cout<<"\n\nERROR : NOT SUFFICIENT BALANCE\n\n";
	else
	bal=bal-witamt;
}
void bank::display()
{	//cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
	cout<<"\nName of Employee : "<<nm;
	cout<<"\nAccount Number of employee :"<<accno;
	cout<<"\nAccount Type :"<<acctp;
	cout<<"\nBalace :"<<bal;
//	cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";

}

int main()
{	cout<<"Enter details of Account\n\n";
	
	
	
	bank b1;
	b1.init_val();
	b1.deposit();
	b1.withdraw();
	b1.display();
	return 0;
}
