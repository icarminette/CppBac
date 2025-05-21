#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main (){

    int x,a,k=0;
    ifstream fin("date.in");

    fin>>x;

    while (fin>>a){
        if(a<x)
        k++;
    }
    
    cout<<k+1;

}
