/*fie a, afisati med arim a cifrelor patrate perf*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    
    int a,c,s,k;
    s=0; k=0;
    cin >>a;

    while (a!=0) {
        c=a%10;
        a=a/10;

        if (sqrt(c) == (int)sqrt(c)) { /*if (c == 9 || c == 4 || c == 1 || c == 0)*/
            s=s+c;
            k++;}
    }
    if(k>0)
        cout <<"ma="<<(float)s/k;
}