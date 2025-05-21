#include <iostream>
using namespace std;

int main () {

    int n,a,i,v[100]={};
    cin>>n;

    for (i=1; i<=n;i++)
    {
        cin>>a;
        v[a]++;
    }
    for(i=0;i<=9;i++)
    if(v[i]==2)
    cout<<i<<" ";
}
   