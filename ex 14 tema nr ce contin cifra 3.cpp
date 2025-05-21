/*cin nnr nat, calc suma nr ce contin cifra 3*/

#include <iostream>
using namespace std;

int main (){
    
    int n,c,i,x,a,s=0;
    cin>>n;

    for (i=0; i<n;i++){
        cin>>a;
        x=a;

        while (a!=0){
            c=a%10;
            a=a/10;

            if (c==3){
                s=s+x;
                break;
            }
        }
    }
    cout <<s;
}