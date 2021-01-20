#include<iostream>
using namespace std;

int main()
{
int a=10, b=20;
int arr[4]={2,4,6,8};
int *p[3];
p[0]=&a;
p[1]=&b;
p[2]=arr;
cout<<*p[0]<<endl;
cout<<*p[1]<<endl;
cout<<p[2][2]<<endl;
cout<< *(p[2]+2)<<endl;
return 0;
}