/*scrieti un program care citeste de la tastatura 2 nr nat nenule l si c si care constr in memorie
si apoi afiseaza o matrice A cu l lini si c coloane cu proprietatea ca fiecare element Aij 
memoreaza cea mai mica dintre valorile indicilor i si j*/

#include <iostream>
using namespace std;

int main (){
    
    int m[20][20], l, c , i, j;
    cin>>l>>c;

    for(i=0;i<l;i++){
        for (j=0;j<c;j++){
            if(i<j)
                m[i][j]=i;
                else 
                m[i][j]=j;
        }
    }   

    for (i=0;i<l;i++){
        for(j=0;j<c;j++){
            cout <<m[i][j]<<" ";
        }
        cout<<endl;
    }
}