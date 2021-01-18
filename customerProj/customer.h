#include <string>
using namespace std;

class Customer
{
  int custid;
  string custname;
  string phoneno;

public:
void setID(int cid);
void setCusterName(string name);
void setPhone(string phone);
int getID();
string getCustomerName();
string getPhoneNumber();
};