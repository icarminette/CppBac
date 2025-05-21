#include <iostream>
using namespace std;
int main(){

    int n,c,p,s1,s2;
    cin>>n;
    s1=s2=0; p=1;


    while(n!=0) {
        c=n%10;
        n=n/10;

        if (c%2==1) 
        p=p*c;
        if(c<5)
        s1=s1+c;
        if(c>=5)
        s2=s2+c;
    }

    if(p==1)
    p=0;

    cout<<p<<endl;
    cout<<s1-s2;
}