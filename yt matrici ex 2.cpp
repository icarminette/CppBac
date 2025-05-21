/*Af suma elem de pe fiecare linie din matrice*/

#include <iostream>
using namespace std;

int main (){
    
    int m[100][100], l, c, i, j, s;  //suma e variab de tip long long uneori

    cin>>l>>c;

    for (i=0;i<l;i++){
        for(j=0;j<c;j++)
        cin>>m[i][j];
    }

    for (i=0;i<l;i++){
        s=0;
        for(j=0;j<c;j++)
        s=s+m[i][j];

        cout<<s<<"\n";
    }

}