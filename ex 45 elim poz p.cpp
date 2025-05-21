//eliminati din vector elem de pe pozitia p
#include <iostream>
using namespace std;

int main () {

    int n, i, p,v[100];
    cin>>n;

    for (i=0;i<n;i++)
    cin>>v[i];

    cin >>p;

    for (i=p;i<n-1;i++)
    v[i]=v[i+1];
    n--;

    for (i=0;i<n;i++)
    cout<<v[i]<< " ";
}