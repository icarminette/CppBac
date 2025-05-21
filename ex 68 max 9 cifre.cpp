#include <iostream>
using namespace std;

int main (){
    
    int n,i,a,c,v[100],mx=INT_MIN;
    cin>>n;

    for(i=0;i<n;i++)
    cin>>v[n];

    for(i=1;i<=n;i++){
        cin>>a;
        while (a!=0){
            c=a%10;
            a=a/10;
            v[c]++;
        }
    }

    for (i=0;i<=9;i++)
        if (v[i]>mx)
        mx=v[i];

    for (i=0;i<=9;i++)
        if(v[i]==mx)
        cout<<i<<" ";
}