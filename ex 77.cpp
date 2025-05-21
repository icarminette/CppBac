#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main (){
    
    int n, a, i, j, min=INT_MAX, max=INT_MIN;
    ifstream fin("date.in");
    fin>>n;
    
    for (i=1;i<=n;i++){
        fin>>a;
        if(a<min)
        min=a;

        int ok=1;
        for(j=2;j<=sqrt(a);j++){
            if(a%j==0)
            ok=1;
        }

        if(a>max && ok==0)
            max=a;

    }
    cout<<min<< " "<<max;

} 