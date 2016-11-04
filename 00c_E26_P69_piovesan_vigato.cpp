#include <iostream>

using namespace std;

int main()
{
    int div=2;
    int num;
    int r;

    cout << "                ALGORITMO CHE VERIFICA SE UN NUMERO E' PRIMO                           " << endl;
     int div=2;
    int num;
    int r;

    cout << "                ALGORITMO CHE VERIFICA SE UN NUMERO E' PRIMO                           " << endl;
    cout << "INSERISCI IL NUMERO" << endl;
    cin >> num;

    r=num%div;

    while (num>div)
    {
        if (r==0)
        {
            cout << "IL NUMERO NON E'PRIMO!" << endl;
            div=num+10;
        }
        if(r==1)
        {
            div=div++;
        }
    }
if (num<div)
{
    cout << "FINE!" << endl;
}
else
{
    cout << "Il NUMERO E' PRIMO....!" << endl;
}
};
