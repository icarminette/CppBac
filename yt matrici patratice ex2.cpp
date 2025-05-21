/* se da o matrice de ordin n, sa se constr o matrice care sa fie simetrica fata de diagonala principala a matricei date*/
/*pe romaneste: TRANSPUSA MATRICEI*/

#include <iostream>
using namespace std;

int main (){
    
    int m[50][50], n, i, j, tr[50][50];
    cin>>n;

    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin>>m[i][j];
        }
    }

    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
        tr[i][j]=m[j][i];  
        }
    }

       for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }

}   