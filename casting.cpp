
//static_cast
#include <iostream> 
#include <string> 
using namespace std; 
class Int { 
	int x; 

public: 
	Int(int x_in = 0) 
		: x{ x_in } 
	{ 
		cout << "Conversion Ctor called" << endl; 
	} 
	operator string() 
	{ 
		cout << "Conversion Operator" << endl; 
		return to_string(x); 
	} 
}; 
int main() 
{ 
	Int obj(3); 
	string str = obj; 
	obj = 20; 
	string str2 = static_cast<string>(obj); 
	obj = static_cast<Int>(30); 
	return 0; 
} 

-------------------------
//const_cast

void fun1(const int &r);

void fun1(const int &r)

{

if(r==0)

{

const_cast<int &>(r)=90;

}

else

{

cout<< "from fun1"<<r<<endl;

}

}



int main()

{

int a=10;

cout<<"a"<<a<<endl;

fun1(a);

a=0;

fun1(a);

cout<< "a"<<a<<endl;

}

---------------------------------------
//reinterpret_cast
int main()
{
  int *p= new int(65);
  char *c = reinterpret_cast<char *>(p);
  cout <<*p<<endl;
  cout<<*c<<endl;
  cout <<p<<endl;
  cout<<c<<endl;

}

---------------------------------------
//Dynamic Casting 


