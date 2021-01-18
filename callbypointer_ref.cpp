void fun1(int a)
{
a=10;
cout<<a<<endl;
}

void fun2(int *p)
{
*p=90;
cout <<*p<<endl;
}

void fun3(int &r)
{
r=60;
cout<<r<<endl;
}

int main()
{
int x=40;
cout <<x<<endl;
fun1(x);
cout <<x<<endl;
fun2(&x);
cout<<x<<endl;
fun3(x);
cout << x<<endl;
return 0;
}