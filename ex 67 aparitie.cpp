#include <iostream>
using namespace std;

int main () {

    int n,a,i,v[150]={}, mn=INT_MAX;
    cin>>n;

    for (i=1; i<=n;i++){
        cin>>a;
        v[a]++;}

    for(i=0;i<=99;i++)
    if(v[i]<mn)
    mn=v[i];

    for (i=0;i<=99;i++)
    if(v[i]==mn)
    cout<<i<<' ';
}
