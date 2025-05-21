#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main (){

    int n, a, i, c, j, min=INT_MAX, max=INT_MIN;
    ifstream fin("date.in");
    fin>>n;

    for (i=1;i<=n;i++){
        fin>>a;

        int inv=0;
        int x=a;
        while (x!=0){
            c=x%10;
            x=x/10;
            inv=inv*10+c;
        }
        if(inv==a){
            if (a>max)
                max=a;
            if (a<min)
                min=a;
        }

    }
    cout<<min<< " "<<max;
}
