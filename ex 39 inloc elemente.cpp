#include <iostream>
using namespace std;

int main() {
    int n,i ;
    cin>>n;
    int v[n];

    for (i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]<0)
        v[i]=abs(v[i]);
        else
            while(v[i]>9)
            v[i]=v[i]/10;
    }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}