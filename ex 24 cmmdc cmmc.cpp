#include <iostream>
using namespace std;

int main (){
    int a,b,c, p=1;
    cin >>a>>b>>c;
    p=a*b;

    while (a!=b){  /*alg lu euclid*/
        if (a>b)
        a=a-b;
        else
        b=b-a;
    }

    p=p/a;
    p=p*c;

    while (a!=c){
        if(a>c)
        a=a-c;
        else
        c=c-a;
    }
    cout<<"cmmdc="<<a<<endl;
    cout<<"cmmmc="<<p/a;
}