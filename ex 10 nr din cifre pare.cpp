/*se citesc n nr, af nr numerelor formate doar din cifre pare*/

#include <iostream>
using namespace std;

int main (){
    int a,c,ki,k,n,i;
    k=0;
    cin>>n;

    for (i=1;i<=n;i++) {
        ki=0;
        cin>>a;

        while(a!=0){
        c=a%10;
        a=a/10;
        if (c%2!=0)
        ki++;
        }
        
        if (ki==0)
        k++;
    }
    cout <<k;
}