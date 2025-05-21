/*Af suma elem impare din matrice*/

#include <iostream>
using namespace std;

int main (){
    
    int m[100][100], l, c, i, j,s;

    cin>>l>>c;

    for (i=0;i<l;i++){
        for(j=0;j<c;j++)
        cin>>m[i][j];
    }

    s=0;

    for (i=0;i<l;i++){
        for(j=0;j<c;j++)
        if (m[i][j]%2==1)
        s=s+m[i][j];
    }

    cout<<s;
}