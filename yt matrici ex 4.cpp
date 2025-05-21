/*cate linii au toate elem egale*/

#include <iostream>
using namespace std;

int main (){
    
    int m[100][100], l, c, i, j;

    cin>>l>>c;

    for (i=0;i<l;i++){
        for(j=0;j<c;j++)
        cin>>m[i][j];
    }
    
    int k=0;

    for (i=0;i<l;i++){

        int ok=0;

        for(j=0;j<c;j++)
            if (m[i][j]!=m[i][1]){
            ok++;
            break;}

        if(ok==0)
        k++;
    }

    cout<<k;
}