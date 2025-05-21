/* Af al doilea cmmare nr prim al unei matrice*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    
    int m[10][10], l, c, i, j, d, k, max1=INT_MIN, max2=INT_MIN;  //suma e variab de tip long long uneori
    //d e variab pt a verif daca un nr e prim
    cin>>l>>c;

    for (i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin>>m[i][j];    //parcurgerea normala a matricei

            k=0;  

            for (d=2;d<=sqrt(m[i][j]);d++){  //verif daca nr are vreun div cuprins intre 2 si rad nr
                if(m[i][j]%d==0)
                k++;    //daca nr are div, k creste deci nr nu e prim
            }
                                //un nr prim se imparte doar la 1 si la el insusi
          
                //acum gasim cmmari doua nr prime:
          
            if(k==0)   //daca nr e prim              
                if(m[i][j]>max1){ //daca nr din matrice e mmare decat cmmare gasit pana acum (care e initializat la val minima)
                    max2=max1; //al doilea cmmare ia valoarea fostului max deoarece
                    max1=m[i][j]; //max curent e matricea
                }
            else 
                if (m[i][j]>max2 && m[i][j]!=max1)
                max2=m[i][j];
        }
    }
    
    cout<<max2;

}