#include <iostream>
using namespace std;

int main() {

    int a,b,c,p,k,s,s2,x;
    p=1; k=0; s=0; s2=0;
    cout<< "Scrie a,b,x: ";
    cin >>a>>b>>x;

    while (a!=0) {
        c=a%10;
        a=a/10;
        if (c%x==0){
            k++;
            p=p*c;}
    }
    while (b!=0) {
        c=b%10;
        b=b/10;
        if(c>5)
        s=s+c;
        if (c<5)
        s2=s2+c;
    }
    cout << "p="<<p <<" k="<<k <<" s="<<s <<" s2="<<s2;

}
