/*elim cel mai mic elem prim dintr un vector*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n,v[100],i, j, k,pmin=-1, minprim=INT_MAX;
    
    cin>>n;
    for (i=0; i<n; i++)
    cin>>v[i];

    for (i=0;i<n;i++) {
    k=0;
    /*if v i >1*/
        for (j=2;j<= sqrt(v[i]);j++) {

            if(v[i]%j==0)
            k++; /*nu e prim*/ 
        }

           if(k==0 && v[i]>1 && v[i]<minprim){
             minprim=v[i];
            pmin=i;}
    }
            
}
    /*if pmin!=-1*/

     for (i=minprim;i<n-1;i++)
    v[i]=v[i+1];
    n--;

    cout<<minprim;

    for (i=0;i<n;i++)
        cout<<v[i]<<" ";

}