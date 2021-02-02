#include <iostream>
using namespace std;

class Calc
{
  int n1, n2;
  mutable char op;
  public:
  Calc(int _n1, int _n2, char op1):n1(_n1),n2(_n2),op(op1)
  {}
  void display() const;
  void updateoperator(char o) const;

};

void Calc ::display() const
{
    cout << n1 << op << n2 <<endl;
}

void Calc:: updateoperator(char o) const
{
    if(op=='*')
    {
        op='/';
    }
}
int main() {
  Calc c1(2,3,'+');
  const Calc c2(5,6,'*');
  c1.display();
  c2.display();
  // operator is multiply udpdate it as '/'
  c2.updateoperator('/');
  c2.display();
}