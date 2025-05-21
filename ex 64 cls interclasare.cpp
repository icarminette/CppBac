#include <iostream>
using namespace std;

int main () {

    int n,m,v1[100],v2[100], j, i,x, v[100];
    cin>>n>>m;

    for (i=0; i<n; i++)
    cin>>v1[i];

    for (i=0; i<m; i++)
    cin>>v2[i];

    i=j=x=0;
    v1[n]=v2[m]=INT_MAX;

    while(i!=n || j!=m) {
        if (v1[i]<v2[j]){
            v[x]=v1[i];
            x++;i++;
        }
        else{
            v[x]=v2[j];
            x++;j++;
        }
    }

    for (i=0;i<x;i++)
        cout<<v[i]<<" ";

}