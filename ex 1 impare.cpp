/* Se citeste un nr nat. Afisati cifrele impare urmate pe alt rand de suma cifrelor mai mari decat 3*/

#include <iostream>
using namespace std;
int main () {
    int s, a, c;
    s=0;
    cin >>a;
    while (a!=0) 
    {
        c=a%10;
        a=a/10;
            if (c%2!=0)
            cout <<c<<" ";
            if (c>3)
            s=s+c;
    }

    cout << endl << "s=" <<s;

}