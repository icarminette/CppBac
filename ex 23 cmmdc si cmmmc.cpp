#include <iostream>
using namespace std;

int main (){
    int a,b,p=1;
    cin>>a>>b;
    p=a*b;

    while (a!=0){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    cout <<"cmmdc="<<a<<endl;
    cout<<"cmmmc="<<p/a;
}