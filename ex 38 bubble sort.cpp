#include <iostream>
using namespace std;

int main() {

    int i, j, n, v[10];
    cin>>n;

    for (i=0;i<n; i++)
        cin >> v[i];

        for (i=0;i<n/2-1;i++)
             for (j=i+1;j<n/2;j++)
                if(v[i]<v[j])
                    swap(v[i],v[j]);

        for (i=n/2;i<n-1;i++)
            for (j=i+1;j<n;j++)
                if(v[i]>v[j])
                    swap(v[i],v[j]);
    for(i=0;i<n;i++)
    cout<<v[i]<<" ";
}