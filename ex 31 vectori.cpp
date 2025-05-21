#include <iostream>
using namespace std;

int main (){
    
    int v[10],i, n, p=1, k=0;
    cin>>n;
    for ( i=0; i<=n-1;i++)
    cin>>v[i];

    for (i=0; i<n ;i++){
        if (v[i]/10==0)
        p=p*v[i];
        if(v[i]/10%10==v[i]%10)
        k++;
    }
    cout <<p<<' '<<k;
}
