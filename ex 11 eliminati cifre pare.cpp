/*fie a, elim cifre pare din a*/

#include <iostream>
using namespace std;

int main (){
    int a,b,p,c,x;
    p=1;b=0;
    cin>>a;
    x=a;

    while (a!=0){
        c=a%10;
        a=a/10;

        if (c%2!=0) {
        b=b+c*p;
        p=p*10;} 
    }

    cout << b;
}