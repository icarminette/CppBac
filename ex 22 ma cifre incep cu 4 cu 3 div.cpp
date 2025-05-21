#include <iostream>
using namespace std;

int main (){
    int a,i,j,s,k,n,x, nrdiv;
    s=0;k=0; nrdiv=0;
    float ma=0;
    cin>>n;
    for (i=1; i<=n; i++){
        cin>>a;
        x=a;
        nrdiv=0;

        while (x>9)
            x=x/10;

        for (j=1; j<=a;j++) {
                if(a%j==0)
                nrdiv++;  } 
    
    if (x==4 && nrdiv ==3){
        s=s+a;
        k++;
        ma= (float)s/k;} }
        cout<<ma; 

}