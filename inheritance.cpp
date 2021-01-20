#include <iostream>
using namespace std;

class account
{
  int account_no;
  string owner_name;
  protected:
  float balance;

  public:
  void setDetails(int acc,string name,float bal)
  {
    account_no=acc;
    owner_name=name;
    balance=bal;
  }
  void displayDetails()
  {
    cout<<"Acc. No: "<<account_no<<endl<<"Name: "<<owner_name<<endl<<"Balance: "<<balance<<endl;
  }
  void deposit(float amt)
  {
    balance+=amt;
    cout<<"Deposit successfull."<<endl<<"Balance is: "<<balance<<endl;

  }
  void withdraw(float amt)
  {
    balance-=amt;
    cout<<"Withdraw successfull."<<endl<<"Balance is: "<<balance<<endl;
  }
};

class saving_account:public account
{
  float interest,roi;
  public:
    void set_interest(float ist=2)
    {
      roi=ist;
    }
    void calculate_interest()
    {
      interest = (balance*roi*2)/100.0;
      cout<<"Interest accumulated: "<<interest<<endl;
      balance+=interest;
    }
};
int main() {
  saving_account cust1;
  cust1.setDetails(1234,"Ram",2000.00);
  cust1.set_interest(4);
  cust1.displayDetails();
  cust1.calculate_interest();
  cust1.displayDetails();
}