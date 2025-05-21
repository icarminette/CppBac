#include <iostream>
using namespace std;

int main() {

    int x;
    bool isPrime = true; // Presupunem că numărul este prim

    cout << "Write a number: ";
    cin >> x;

    if (x <= 1) {
        isPrime = false; }// Numerele mai mici sau egale cu 1 nu sunt prime
     else {
        for (int i = 2; i <= x / 2; i++) {      // bucla va continua atâta timp cât i este mai mic sau egal cu x / 2
            if (x % i == 0) {                   // cum i este un număr întreg, vom verifica i de la 2 la un nr intreg
                isPrime = false;                // (daca x=15, x/2 = 7.5, dar vom lua de la 2 la 7)
                break; // Dacă găsim un divizor, oprim căutarea
            }
        }                       // Verificăm if (x % i == 0), adică if (15 % 2 == 0).
                                // 15 % 2 înseamnă împărțirea lui 15 la 2 și aflarea restului, care este 1.
            //Pentru că restul nu este 0, 15 nu este divizibil cu 2. Deci isPrime rămâne true și bucla continuă cu i incrementat la 3.
    }

    if (isPrime) {
        cout << "The number is prime!" << endl;
    } else {
        cout << "The number is not prime!" << endl;
    }

    return 0;
}

/*
Pas cu pas:

1. Inițializare:

Avem x = 15.
Bucla for începe cu int i = 2.

2. Prima iterație (i = 2):

Condiția buclei for este i <= x / 2. Asta înseamnă că bucla va continua atâta timp cât i este mai mic sau egal cu 15 / 2, adică 7.5. Cum i este un număr întreg, vom verifica i de la 2 la 7.
Verificăm if (x % i == 0), adică if (15 % 2 == 0).
15 % 2 înseamnă împărțirea lui 15 la 2 și aflarea restului, care este 1.
Pentru că restul nu este 0, 15 nu este divizibil cu 2. Deci isPrime rămâne true și bucla continuă cu i incrementat la 3.

3. A doua iterație (i = 3):

Acum i = 3.
Verificăm if (15 % 3 == 0).
15 % 3 înseamnă împărțirea lui 15 la 3 și aflarea restului, care este 0 (deoarece 15 este divizibil exact cu 3).
Deoarece 15 este divizibil cu 3, setăm isPrime = false.
Bucla se oprește aici (break), deoarece am găsit un divizor care dovedește că 15 nu este un număr prim.

4. Ieșirea din buclă:

După ce bucla se oprește, codul verifică valoarea lui isPrime.
Cum isPrime a fost setat la false, programul va afișa "The number is not prime!". */