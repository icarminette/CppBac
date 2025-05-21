/*se cit un nr n si constr in mem o matrice n*n ale carei elem vor primi valori dupa cum urmeaza:
elem din linia i si coloana j primeste ca valoare ultima cifra a produsului i*j*/

#include <iostream>   //nu mergeeeeeeeeeeeeee
using namespace std;
int main () {

    int m[20][20], n, i, j;
    cin >>n;

    for (i=1;i<=n; i++){
        for (j=1;j<=n;j++){
            m[i][j]=(i*j)%10; 
        }
    }

     for (i=1;i<=n;i++){
        for(i=1;j<=n;j++){
            cout <<m[i][j]<<" ";
        }
        cout<<endl;
    }
}