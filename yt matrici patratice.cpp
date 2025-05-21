#include <iostream>
using namespace std;

int main (){
    
    int m[50][50], n, i, j;
    cin>>n;

    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin>>m[i][j];
        }
    }

    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout <<m[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Elem de pe diag principala: ";

    for (i=0;i<n;i++){
        cout<<m[i][i]<<" ";
    }
    cout<<endl;
    cout<<"Elem de pe diag secundara: ";

    for (i=0;i<n;i++){
        cout<<m[i][n-i-1]<<" ";
    }
    cout<<endl;
}