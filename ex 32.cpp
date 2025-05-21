/*calc ma a elem ce apartin[a,b]*/

#include <iostream>
using namespace std;

int main (){

    int a,b,s=0, k=0, v[10],i,n, ma;
    cin>>a>>b>>n;
    for ( i = 0; i <n ; i++)
      cin>>v[i];
    
    for (i=0;i<n;i++)
    if(v[i]>=a && v[i]<=b){
        s=s+v[i];
        k++;
    }
    
    if (k!=0){
    float ma=(float)s/k;
    cout<<ma;}
    else 
    cout<<"nu exista elem in interval";

}