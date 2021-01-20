#include <iostream>
using namespace std;
class Point{
int x,y;
public:
Point(int a=0, int b=0);
void print();
};

Point::Point(int a, int b):x(a),y(b)
{}

void Point::print()
{
cout<< "(x:"<<x<<",y:"<<y<<")"<<endl;
}

int main() {
int *p=NULL;
int n;
cout<< "how many numbers: ";
cin>>n;
p=new int[n];
for(int i=0;i<n;i++)
{
cout << "Enter number:";
cin>>p[i];
}
cout<<"Values are:"<<endl;
for(int i=0;i<n;i++)
{
cout << p[i]<<endl;
}
delete [] p;
p=NULL;
Point *a=new Point[3];
for(int i=0;i<3;i++)
{
cout <<"Point"<<i+1<<endl;
a[i].print();
}
delete [] a;
a=NULL;

Point **listofobject=new Point*[n];
int x,y;
for(int i=0;i<n;i++)
{
cout<< "Enter x and y";
cin>>x>>y;
listofobject[i]=new Point(x,y);
}

for(int i=0;i<n;i++)
{
listofobject[i]->print();
delete listofobject[i];
listofobject[i]=NULL;
}
delete [] listofobject;
listofobject=NULL;
}