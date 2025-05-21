#include <iostream>
using namespace std;

int main (){
    int n, m, x, st=0, dr=n-1,p=-1;
    cin >>n;
    int v[n];
    cin>>v[n];
    
    while(st<=dr && p==-1){
        m=(st=dr)/2;
        if(x==v[m])
        p=m;
        if(x<v[m])
        dr=m-1;
        if(x>v[m])
        st=m+1;
    }
    if(p!=0)
    cout<<p;
    else
    cout<<"Nu exista";

}