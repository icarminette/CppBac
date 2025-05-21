#include <iostream>
using namespace std;
int main () {
    int n,v[10],i,j;
    cin>>n;

    for (i=0; i<n; i++)
    cin>>v[i];

    for (i=0; i<n; i++)
    
    if (v[i]%2==0)
    {
            for (j=i; j<n-1; j++)
            v[j]=v[j+1];
            n--; i--;
    }
    
    for (i=0;i<n;i++)
        cout<<v[i]<<" ";


}