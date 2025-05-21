/*a, verif daca e prim*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a,i,k=0;
    cin>>a;
    for (i=2;i<= sqrt(a);i++) {
        if(a%i==0)
        k++;
        if(k==0 && a>1)
        cout<<"Numarul e prim";
        else
        cout<<"Numarul NU e prim";}
}