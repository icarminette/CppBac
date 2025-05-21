#include <iostream>
using namespace std;

int main () {

    int n,a,i,v[100]={}, mx=0;
    cin>>n;

    for (i=1; i<=n;i++){
        cin>>a;
        v[a]++;}

    for(i=10;i<=99;i++)
    if(v[i]>mx)
    mx=v[i];

    for (i=10;i<=99;i++)
    if(v[i]==mx)
    cout<<i<<' ';
}
