/*fie un nr in baza 10, af in baza x*/

#include <iostream>
using namespace std;

int main (){
    
    int a,x,b,p,r;
    b=0;p=1;
    cin>>a>>x;
    while (a!=0){
        r=a%x;
        a=a/x;
        b=b+r*p;
        p=p*10;
    }
    cout <<b;
}

/*#include <iostream>
using namespace std;

int main () {
    int a, x, b, p, r;
    b = 0; p = 1;
    cin >> a >> x;
    
    // Verificare daca baza este intre 2 si 10
    if (x < 2 || x > 10) {
        cout << "Baza trebuie sa fie intre 2 si 10" << endl;
        return 1;
    }

    // Convertirea numarului din baza 10 in baza x
    while (a != 0) {
        r = a % x;   // Restul impartirii
        a = a / x;   // Impartirea
        b = b + r * p;  // Formarea numarului final
        p = p * 10;  // Actualizarea pozitiei cifrei
    }
    
    cout << b << endl;  // Afișarea rezultatului în baza x
}
*/