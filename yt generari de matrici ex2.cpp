/*scrieti un program care citeste de la tastatura 2 nr nat nenule l si c si care constr in memorie
si apoi afiseaza o matrice A cu l lini si c coloane a.i. patrcurgand tabloul linie cu linie de 
sus in jos si fiecare linie de la stannga la dreapta, sa se obtina sirul primelor l*c numere
 patrate perfecte impare ordonate stricts crescator */

#include <iostream> 
using namespace std;

int main (){
    
    int m[20][20], l, c , i, j, k=1;
    cin>>l>>c;

    for(i=1;i<=l;i++){
        for (j=1;j<=c;j++){
            m[i][j]=k*k;
            k+=2;
        }
    }   

    for (i=1;i<=l;i++){
        for(j=1;j<=c;j++){
            cout <<m[i][j]<<" ";
        }
        cout<<endl;
    }
}