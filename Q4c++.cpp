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

	/*	bank(int acc_no, char *name,char *acc_type,float balance)
		{
			accno=acc_no;
			strcpy(nm,name);
			strcpy(acctp,acc_type);
			bal=balance;
		}**/
	void deposit();
	void withdraw();
	void display();
};
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
	cout<<"ERROR : NOT SUFFICIENT BALANCE";
	bal=bal-witamt;
}
void bank::display()
{	cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
	cout<<"Name of Employee : "<<nm;
	cout<<"\nAccount Number of employee :"<<accno;
	cout<<"\nAccount Type :"<<acctp;
	cout<<"\nBalace :"<<bal;
	cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";

}

int main()
{	int acc_no;
 	char name[50],acc_type[12];
	float balance;
	
	cout<<"Enter Account Number of Employee :";
	cin>>acc_no;
	cout<<"Enter Name of Employee :";
	cin>>name;
	cout<<"Enter Account type of Employee :";
	cin>>acc_type;
	cout<<"Enter balance of Employee :";
	cin>>balance;
	
	bank b1;
	b1.deposit();
	b1.withdraw();
	b1.display();
	return 0;
}
