#include <iostream>
using namespace std;

class account
{
int account_no;
string owner_name;
protected:
float balance;
float roi;
public:
void set_roi(float ist=2);
void setDetails(int acc,string name,float bal)
{
account_no=acc;
owner_name=name;
balance=bal;
}
void displayDetails()
{
cout<<"Acc. No: "<<account_no<<endl;
cout<<"Name: "<<owner_name<<endl;
cout<<"Balance: "<<balance<<endl;
}
virtual void deposit(float amt)=0;//pure virtual function

virtual void withdraw(float amt)=0;//pure virtual
virtual ~account();
};
account::~account()
{
  cout << "Account Destroyed"<<endl;
}
void account :: withdraw(float amt)//pure virtual
{
balance-=amt;
cout<<"Withdraw "<<amt<<" successfull."<<endl<<"Balance is: "<<balance<<endl;
}

void account::set_roi(float ist)
{
  roi=ist;
}
void account::deposit(float amt)
{
balance+=amt;
cout<<"Deposit "<<amt<<" successfull."<<endl<<"Balance is: "<<balance<<endl;
}
class saving_account:public account
{
float interest;
public:
void calculate_interest()
{
interest = (balance*roi*2)/100.0;
cout<<"Interest accumulated: "<<interest<<endl;

}
~saving_account();
void deposit(float amt);
void withdraw(float amt);
};

saving_account::~saving_account()
{
  cout << "Saving Account Destroyed"<<endl;
}
void saving_account :: withdraw(float amt)
{
  account::withdraw(amt);
}
void saving_account::deposit(float amt)
{
  calculate_interest();
  balance+=interest;
  account::deposit(amt);
}

class currentAccount: public account{
  float charges;
public:

void calculate_charges();
void withdraw(float amt);
void deposit(float amt);
~currentAccount();
};

currentAccount::~currentAccount()
{
  cout << "Currrent Account Destroyed"<<endl;
}
void currentAccount ::deposit(float amt)
{
  account::deposit(amt);
}
void currentAccount::calculate_charges()
{
  charges=(balance*roi)/100.0;
  cout << "Charges to be deducted:"<<charges<<endl;
}
void currentAccount::withdraw(float amt)
{
  calculate_charges();
  account::withdraw(amt+charges);
}

int main() 
{
 account *record[2]={NULL,NULL};
 record[0]=new saving_account();
 record[1]=new currentAccount();
 record[0]->setDetails(1234,"Reena",2000);
 record[1]->setDetails(1345,"Geet",8000);
 record[0]->set_roi(4);
 record[1]->set_roi(2);
 for(int i=0;i<2;i++)
 {
   record[i]->displayDetails();
   delete record[i];
   record[i]=NULL;
 }

 


return 0;
}