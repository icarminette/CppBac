/*se cit 2 nr, af nr pt care prod cifrelor impare e mai mic*/

#include <iostream>
using namespace std;

int main (){
    
    int a,b,c,p=1,p2=1,as,bs;
    cin>>a>>b;
    as=a;
    bs=b;

    while (a!=0) {
        c=a%10;
        a=a/10;
        if (c%2!=0)
        p=p*c;
    }

    while (b!=0) {
        c=b%10;
        b=b/10;
        if (c%2!=0)
        p2=p2*c;
    }

    if(p<p2)
    cout<<as;
    else
    cout<<bs;

}