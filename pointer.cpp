#include <iostream>
using namespace std;

void print1D(int *p)
{
for(int i=0;i<5;i++)
{
//cout<<p[i]<<endl;
cout<<*(p+i)<<endl;
}
}

void print2D(int (*p)[3])
{
for(int i=0;i<2;i++)
for(int j=0;j<3;j++)
{
cout<< p[i][j];
}
}

int main()
{
int arr[]={1,2,3,4,5};
int matrix[2][3]={1,2,3,4,5,6};
print1D(arr);
print2D(matrix);
return 0;
}