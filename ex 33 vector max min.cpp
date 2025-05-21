#include <iostream>
using namespace std;

int main (){
    
    int min,max,n,i;
    min=INT_MAX; max=INT_MIN;
    cin>>n;
    int v[n];

    for (i=0;i<n;i++){
        cin>>v[i];     
    }

    for (i=0;i<n;i++) { 
        if(v[i]>max)
        max=v[i];
        if(v[i]<min)
        min=v[i];
    }

    cout <<min<<" "<<max;
}