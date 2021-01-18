#include <iostream>
#include <string>
#include "customer.h"

using namespace std;

void Customer ::setID(int cid){
custid=cid;
}
void Customer ::setCusterName(string name){
custname=name;
}
void Customer ::setPhone(string phone){
phoneno=phone;
}
int Customer ::getID(){
return custid;
}

string Customer ::getCustomerName(){
return custname;
}

string Customer ::getPhoneNumber(){
return phoneno;
}