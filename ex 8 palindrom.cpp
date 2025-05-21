/*fie a, verif daca e palindrom*/

#include <iostream>
using namespace std;

int main (){
    
    int a,c,x,inv;
    inv=0;
    cin>>a;
    x=a;

    while (a!=0) {
        c=a%10; 
        a=a/10;
        inv=inv*10+c;
    }
    
    if (inv==x)
    cout <<"Palindrom";
    else
    cout << "Numarul nu e palindrom";
}