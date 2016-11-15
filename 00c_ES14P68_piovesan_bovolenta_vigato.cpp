#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,scelta,perimetro,area,diagonale;
    cout << "algoritmo per calcolare perimetro, area e diagonale di un retttangolo" << endl;
    cout << "inserisci la misura del lato a" <<endl;
    cin >> a;
    cout << "inserisci la misura del lato b" << endl;
    cin >> b;
    cout << "premi [1] se vuoi visualizzare la misura del perimetro, [2] per la misura dell'area e [3] per la misura dellla diagonale" << endl;
    cin >> scelta;
    if (scelta == 1){
            perimetro = (a+b)*2;
            cout << "il perimetro è -->" perimetro << endl;
    }else if (scelta == 2){
            area = a*b;
            cout << "l'area è -->" area << endl;
    }else if (scelta == 3){
            diagonale = sqrt((a*a+b*b));
            cout << "la diagonale è -->" diagonale << endl;
    }else{
            cout << "devi premere [1], [2] 0 [3]" << endl;
    };
    system("PAUSE");
};
