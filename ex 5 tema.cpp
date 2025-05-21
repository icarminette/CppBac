#include <iostream>
using namespace std;

int main () {

    int a,b,c,s,s2, as, bs;
    s=0; s2=0;
    cout << "Scrie a,b: ";
    cin >>a>>b;

    as=a;
    bs=b;

    while (a!=0) {
        c=a%10;
        a=a/10;
        s=s+c;
    }

    while (b!=0) {
        c=b%10;
        b=b/10;
        s2=s2+c;
    }

    if (s2>s)
    cout << bs;
    if (s>s2)
    cout << as;
}