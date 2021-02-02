#include <iostream>

#include <cmath>

#include <exception>



using namespace std;

class NegativeNumberException: public exception{​​

int errorno;

string errormsg;

public:

NegativeNumberException(int en, string em):errorno(en),errormsg(em)

{​​



}​​

~NegativeNumberException()

{​​



}​​

void printerrorstack()

{​​

cout<< "Error no: "<<errorno<<endl;

cout << "Error msg: "<<errormsg<<endl;

}​​

}​​;



int main()

{​​

double d;

cout << "Enter a number to find square root:";

cin>>d;

try

{​​

if(d>0)

cout << sqrt(d)<<endl;

else

throw NegativeNumberException(101,"Negative number not allowed");

}​​

catch(NegativeNumberException &e)

{​​

e.printerrorstack();

}​​

catch(exception &e)

{​​

}​​

}​​