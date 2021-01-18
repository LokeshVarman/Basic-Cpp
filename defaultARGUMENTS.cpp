#include <iostream>
using namespace std;

void fun1(int a=40, int b=40)
{
  cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;
}
int main()
{
  int x=20;
  cout <<x<<endl;
  fun1(x);
  fun1();
fun1(5,6);
  
  return 0;
}