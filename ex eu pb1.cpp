/*Se citeste un nr. Aflati suma cifrelor impare mai mici decat 6 si produsul cifrelor pare mai mari decat 4*/

#include <iostream>
using namespace std;

int main (){

    int a,c,k,s,p;
    s=0;p=1; k=0;
    cin >>a;

    while (a!=0){
        c=a%10;
        a=a/10;
        if (c%2==1 && c<6)
        s=s+c;
        if (c%2==0 && c>4)
        p=p*c;

    }
    cout <<"s="<<s<<" p="<<p;
    }