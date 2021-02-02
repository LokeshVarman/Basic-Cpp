//rethrowing and suppresing exception types
#include <iostream>

using namespace std;


void divison(int n1, int n2)

{

int result;

try{

if(n2!=0){

result=n1/n2;

cout << "division result is: "<<result<<endl;

}

else{

throw n2;

}

}

catch(int e)

{

cout << "exception handlled in the function"<<endl;
throw 'e'; //rethrowing 
}

}



int main() {

int n1,n2;

cout << "Enter two nos:";

cin>>n1>>n2;

try{

divison(n1,n2);

cout << "Msg after divison1"<<endl;

divison(8,0);

cout << "Msg after division2"<<endl;

}

catch(char e)

{

cout << "char exception handled "<<endl;

}

return 0;

}