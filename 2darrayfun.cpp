int printarray(int (*p)[3])
{
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
cout<< p[i][j]<<endl;
}
}

int a[2][3]={1,2,3,4,5,6};
printarray(a);