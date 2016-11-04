#include <iostream>

using namespace std;

int main()
 {
   int numero;
   cout << "Scrivi un numero intero non negativo " <<endl;
   cout << "(e che sia piu piccolo di 1000)"<<endl;
   cin >> numero;
   int centinaia, decine, unita;

   centinaia = numero/100;
   decine = (numero/10) - centinaia*10;
   unita = numero - (centinaia*100+decine*10);
   cout << "Il numero è composto da: "<< endl;
   cout << centinaia << " centinaia, " << decine << " decine, " << unita << " unità."<< endl;
   return 0;
}
