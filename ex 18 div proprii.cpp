/*fie un nr nat, aflati div si div propri*/

#include <iostream>
using namespace std;

int main (){
    
    int a,i;
    cin >>a;
    for(i=1;i<=a;i++)
        if (a%i==0)
        cout<<i<<" ";
    cout<<endl;
for (i=2;i<=a/2;i++)
    if(a%i==0)
    cout<<i;
}