/*af elem de pe poz impare*/

#include <iostream>
using namespace std;

int main (){
    
    int v[101], n, i;
    cin>>n;
    for( i=1; i<=n; i++){
        cin>>v[i];
    }

    for(i=1; i<=n;i++){
        if(i%2==1)
        cout<<v[i]<<" ";
    }

}