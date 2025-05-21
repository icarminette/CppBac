/*cout al doilea cel mai mare elem impar si de cate ori apare cel mai mic pozitiv*/

#include <iostream>
using namespace std;

int main (){


    int n, i, v[15], k=0, maximp=INT_MIN, maximp2=INT_MIN, minpoz=INT_MAX;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(i=0; i<n; i++){
        if (v[i]%2!=0 && v[i]>maximp)
        maximp=v[i];
        if (v[i]>=0 && v[i]<minpoz)
        minpoz=v[i];
    }

    for(i=0;i<n;i++){
        if(v[i]%2!=0 && v[i]>maximp2 && v[i]<maximp)
        maximp2=v[i]; 
        if(v[i]==minpoz)
         k++;
    }

    cout<<maximp2<<" "<<k;
 
}