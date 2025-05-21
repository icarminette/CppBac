/*se citesc n nr nat, calc suma nr palindroame*/

#include <iostream>
using namespace std;

int main () {

    int a,x,c,inv,n,s,i;
    inv=0; s=0;
    cin>>n;

    for(i=1;i<=n;i++) {
    cin>>a;
    x=a;
    while (a!=0) {
        c=a%10;
        a=a/10;
        inv = inv*10+c;
    }
    if (inv==x)
    s=s+x;}

    cout<<s;
}