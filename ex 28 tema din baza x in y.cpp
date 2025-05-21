#include <iostream>
#include <cmath>
using namespace std;


int main (){
    int a,x,b,p,c,y;
    cin >>x>>y>>a;
    b=0;p=0;

    while (a!=0){
        c=a%10;
        a=a/10;
        b=b+c*pow(x,p);
         /*x e baza*/
        p++;
    }
    p=1;
    while (b!=0){
        c=b%y;
        b=b/y;
        a=a+c*p;
        p=p*10;
        
    }

    cout<<a;

}