#include <iostream>
#include "customer.h"
using namespace std;
int count=20;

int main()
{
Customer record[count];
int cn;
cout << "Enter how many Customer records you wanted to save:";
cin>>cn;
for(int i=0;i<cn;i++)
{
cout<<"Enter customer ID:";
int id;
cin>>id;
record[i].setID(id);
cin.ignore();
cout << "Enter customer Name:";
string name;
getline(cin,name);
record[i].setCusterName(name);
cout <<"Enter Phone No:";
string phone;
cin>>phone;
record[i].setPhone(phone);
}
cout << "Record are:"<<endl;
cout << "CustomerID | CustomerName | Phoneno"<<endl;
for(int i=0;i<cn;i++){
cout<< record[i].getID()<<" | "<<record[i].getCustomerName()
<<" | "<<record[i].getPhoneNumber()<<endl;
}

}