#include <iostream>
#include <fstream>
using namespace std;

int main (){
    
    int a=0,b=0,c=0,x;
    ifstream fin("date.in");
    ofstream fout("date.out");
    fin>>a>>b>>c;
    x=a;
    while(x%b!=0 || x%c!=0)
        x=x+a;
    fout<<x;
    fin.close();
    fout.close();
}