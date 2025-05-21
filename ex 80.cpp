#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main (){

    int a, mx1=MIN_INT, mx2=MIN_INT;
    ifstream fin1("nr1.in");
    ifstream fin2("nr2.in");

    while (fin1>>a){
        if(a>mx1);
        mx1=a;
    }

    while (fin2>>a){
        if (a>mx2);
    }

    if(mx1>mx2)
        cout<<"Primul fisier";
    else
        if (mx2>mx1)
            cout<<"Al 2lea fisier";
        else 
            cout<<"Ambele";


daca era praf era niegru la nas
}
