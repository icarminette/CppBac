#include <iostream>
using namespace std;

int main () {

    int n,v[100],i,pmin,neg=0, min=INT_MAX, pneg=-1;
    cin>>n;
    for (i=0; i<n; i++)
    cin>>v[i];

    for(i=0;i<n;i++)
    {

         if(v[i]<=min && v[i]>=0){
        min=v[i];
        pmin=i;}

        if (v[i]<0){
        neg++;
        if(neg==2)
        pneg=i;}
    }
    
     for (i=pmin;i<n-1;i++)
    v[i]=v[i+1];
    n--;
    /*cum elimin elem neg?*/

    cout<<pmin;

    for (i=0;i<n;i++)
        cout<<v[i]<<" ";

}