#include <iostream>
using namespace std;
int main() {


    int n, m, mij,k=0, x, v[10],i, st,dr,p;

    cin >>n>>m;

    for(i=0;i<n;i++)
    cin>>v[i];
    for(i=0;i<m;i++){
        st=0, dr=n-1,p=-1;
            cin>>x;
    while(st<=dr && p==-1){
        mij=(st+dr)/2;
        if(x==v[mij])
        p=mij;
        if(x<v[mij])
        dr=mij-1;
        if(x>v[mij])
        st=mij+1;
    }

    if(p!=-1)
    k++;
    }
    cout<<k;
}
