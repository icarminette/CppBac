/*n nr nat, af suma nr prime si max min nr neprime*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a,i,j,n,k=0,s=0,min=INT_MAX, max=0;
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>a;
        k=0;    // Resetăm contorul pentru fiecare număr

            for(j=2;j<=sqrt(a);j++){
                if (a%j==0)
                k++;
            }
            if(k==0 && a>1) {
                    s=s+a;}
                    else {
                        if(a>max)
                        max=a;
                        if(a<min)
                        min=a; 
                        }             
            
    }      
    
    cout<<s<<" "<<max<<" "<<min;
}