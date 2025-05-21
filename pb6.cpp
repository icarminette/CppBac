/*Să se scrie un program care determină
 maximul a două numere întregi citite 
 de la tastatură.*/

 #include <iostream>
 using namespace std;
 int main() {
    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << max(x,y);
    return 0;
 }