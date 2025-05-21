#include <iostream>
using namespace std;

int main () {

    int n,v[10],i,j,pmax,pmin,max=INT_MIN, min=INT_MAX;
    cin>>n;
    for (i=0; i<n; i++)
    cin>>v[i];

    for(i=0;i<n;i++)
    {
        if (v[i]>max){
            max=v[i];
            pmax=i;
        }
    if(v[i]<=min){
        min=v[i];
        pmin=i;
    }
    }

    for (i=pmax;i<n-1;i++)  /*eliminare*/
    v[i]=v[i+1];    /*mutare la stanga*/
    n--;     /*scade dim vector ptc */
    pmin--;
    
     for (i=pmin;i<n-1;i++)
    v[i]=v[i+1];
    n--;

    cout<<pmax<<pmin;

    for (i=0;i<n;i++)
        cout<<v[i]<<" ";

}