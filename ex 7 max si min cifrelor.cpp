/*2 nr nat, pt a afisati max si min cifre iar pt b max cifre pare*/

#include <iostream>
using namespace std;

int main (){

    int a,b,c,mx,mx2,mn;
    mx=mx2=0; mn=9;
    cin >>a>>b;

    while (a!=0){
        c=a%10;
        a=a/10;
        if (c>mx)   // Dacă cifra curentă este mai mare decât cea mai mare cifră găsită până acum
        mx=c;       // Actualizăm mx cu această cifră
        if (c<mn)   // Dacă cifra curentă este mai mică decât cea mai mică cifră găsită până acum
        mn=c;       // Actualizăm mn cu această cifră
        
    }

    while (b!=0) {
        c=b%10;
        b=b/10;
        if (c>mx2 && c%2==0)
        mx2=c;
    }
    cout << "mx="<<mx<<" mn="<< mn<<" mx2="<<mx2;
}