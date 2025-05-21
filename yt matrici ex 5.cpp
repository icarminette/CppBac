/*af elem cu nr max de aparitii in matrice, daca sunt mai multe care apar de acelasi nr max, af cel mai mare dintre ele*/

//se face cu VECTORII DE APARITIE (m o traznit)







                        /*                                  NU MERGE            */











#include <iostream>
using namespace std;

int main (){
    
    int m[50][50], l, c, i, j, v[2500]; //vect de frecventa

    cin>>l>>c;

    for (i=0;i<l;i++){
        for(j=0;j<c;j++)
        cin>>m[i][j];
    }

    for (i=0;i<l;i++){
        for(j=0;j<c;j++)
        v[m[i][j]]++; // pt fiecare elem al matricei, creste vectorul matricei    vai mama mea
    }

    int max=INT_MIN;

    for ( i = 0; i < 2500; i++) {
        if(v[i]>=v[max])
        max=i;  //cmmare elem cu frecv cmmare 
    }

    cout<<max;
    
}