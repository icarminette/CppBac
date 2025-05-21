/*calc diferenta in valoare absoluta dintre sumele elementelor de pe cele doua diagonale ale matricelor*/

/*1. calc suma elem de pe diag princ    sp
2. calc suma elem de pe diag sec    ss
3. scadem sumele in valoarea absoluta   da  */

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

    int sprinc=0, ssec=0;
    cout<<"Elem de pe diag principala: ";
    for (i=0;i<n;i++){
        cout<<m[i][i]<<" ";
        sprinc=sprinc+m[i][i];
    }
    cout<<endl;

    cout<<"Elem de pe diag secundara: ";
    for (i=0;i<n;i++){
        cout<<m[i][n-i-1]<<" ";  
        ssec=ssec+m[i][n-i-1];
    }
    cout<<endl;
    cout <<"Suma elem diag princ: "<<sprinc<<endl<<"Suma elem diag sec:"<<ssec<<endl;
    cout<<"Diferenta in valoare absoluta: " << abs(sprinc-ssec);
}