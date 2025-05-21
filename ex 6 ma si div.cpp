/*se citesc 2 nr, pt a calc nr cifre div cu 3 iar pt b ma a cifrelor<6*/

#include <iostream>
using namespace std;

int main (){

    float ma;
    int a,b, c, s,k,kb;
    s=0;k=0;kb=0;
    cin >>a>>b;

    while (a!=0) {
        c=a%10;
        a=a/10;
        if (a%3==0)
        k++;
    }

    while (b!=0){
        c=b%10;
        b=b/10;
        if (c<6){
         s=s+c;
         kb++;
        }
    }
    cout <<"k="<<k<<" ma="<<(float)s/kb;
}