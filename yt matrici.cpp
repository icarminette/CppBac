#include <iostream>
using namespace std;

// #rezist, ca daca nu rezist crap 

int main (){

    int m[100][100], l, c, i, j;

    cin>>l>>c;
    for( i=0; i<l;i++){ //parcurge cele n linii ale matricei
        for ( j=0; j < c;j++) //parc cele c elemente de pe linia i a matricei
        cin>>m[i][j];
    }

    for( i=0; i<l;i++){ 
        for ( j=0; j < c;j++) 
        cout<<m[i][j]<<" ";
        cout<<endl; //NU MERGEEEEEEEEEEEEEEEEEEEEEEEE, cum afisez matricea??????????????????
    }
}