#include<iostream>
#include<string.h>
#include<stdio.h>
#define pass usama
using namespace std;

class account_holder
{
	public:
		int id;
		char password[20];
		int acc_no;
		
	void details();
};
void account_holder::details()
{	cout<<"User id is: "<<id;
	cout<<"account number: "<<acc_no;
	
}
int main()
{
	int id,acc_no;
	char pass[20];
	char passwo[]="usama"; 
	cout<<"Enter user id: ";
	cin>>id;
	cout<<"Enter password: ";
	cin>>pass;
	if(strcmp(pass,passwo))
	{	
	cout<<"Wrong password"<<endl;
	}
	else
		cout<<"Enter account no";
		cin>>acc_no;
	//int details();
	account_holder s1;
	s1.details();
	return 0;
}
