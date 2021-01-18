
#include<iostream>
#include"customer.h"
using namespace std;
int main()
{
Customer record1;
cout<<"Enter customer ID:";
int id;
cin>>id;
record1.setID(id);
cin.ignore();
cout << "Enter customer Name:";
string name;
getline(cin,name);
record1.setCusterName(name);
cout <<"Enter Phone No:";
string phone;
cin>>phone;
record1.setPhone(phone);
cout << "Record is:"<<endl;
cout<< record1.getID()<<"|"<<record1.getCustomerName()<<"|"<<record1.getPhoneNumber()<<endl;
}
