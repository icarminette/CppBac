#include <iostream>
using namespace std;
int main () {

    int s, a, b, c, p,  k, s2, k2;
    s=0; s2=0; p=1; k2=0;
    cin >>a;
    while (a!=0) 
    {
        c=a%10;
        a=a/10;
        s=s+c;
        k++;}
        while (b!=0) {
         c=b%10;
         b=b/10;
        
            if (c%3!=0){
            s2=s2+c;
            k2++; }
    }

    cout << "ma=" << (float)s/k << (float)s2/k2;

}