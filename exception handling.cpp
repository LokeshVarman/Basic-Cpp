#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2num to divide"<<endl;
    cin>>a>>b;
    try {
        if(b!=0){
            int result=a/b;
            cout<<"result is"<<result;
        }
        else{
            throw b;
        }
    }
    catch(int e){
        cout<<"division by zero is not possible";
    }
    
    return 0;
}
