
//inheritance and virtual and function overriding 
#include <iostream>
using namespace std;

class GrandBaseCls{
  public:
  void show(){
    cout<<"GrandBaseCls Called"<<endl;
  }
};

class BaseCls1:public virtual GrandBaseCls{
  protected:
  int var1;
  public:
  BaseCls1(int a1){
    var1=a1;
  }
  void setVar1(int a){
    var1=a;
    cout<<"value of var1: "<<a<<endl;

  }
  void show()//funciton overriding
  {
    cout << "base cls1 show"<<endl;
  }
};

class BaseCls2:public virtual GrandBaseCls{
  protected:
  int var2;
  public:
  BaseCls2(int a2){
    var2=a2;
  }
  void setVar2(int b){
    var2=b;
    cout<<"value of var2: "<<b<<endl;
  }
  void show()
  {
    cout << "Base cals2 function"<<endl;
  }
};

class DerivedCls:public BaseCls1,public BaseCls2{
  public:
  DerivedCls(int v1, int v2):BaseCls1(v1),BaseCls2(v2){
  }
  void display(){
    cout<<"DerivedCls Called"<<endl;
    cout<<"Value of Var1: "<<var1<<endl;
    cout<<"Value of Var2: "<<var2<<endl;
      }
  void show()
  {
    GrandBaseCls::show();
    BaseCls1::show();
    BaseCls2::show();
    cout << "Derived show"<<endl;
  }
};

int main() {
  DerivedCls obj(2,3);
  obj.show();
  //obj.BaseCls1::show();
  //obj.setVar1(5);
  //obj.setVar2(6);
  obj.display();

 
}