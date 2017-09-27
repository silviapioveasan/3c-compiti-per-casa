#include <iostream>
#include <stdlib.h>
using namespace std;

//Questo programma converte un numero naturale in base 10 dato in input in un altrettanto numero naturale con base scelta dall'utente
int main(){

    int v[1000];
    int b,n,ris,r;
    /*
    'n' = variabile corrispondente ad un numero naturale inserito in input dall'utente
    'b' = variabile corrispondente ad una base, nel quale si vuole convertire il numero naturale, inserita in input dall'utente. Attenzione!non può assumere valori <=1
    'r' = variabile corrispondete al resto della divisione n/b
    'ris' = variabile corispondente al quoziente di n/b
    v[1000] = vettore nel quale vengono ad ogni cella viene assegnata una cifra del numero convertito a nuova base. Attenzione! avendo dimensione 1000 il nuomero convertito non può superare di cifre la dimensione del vettore
    */

    cout<<"#PROGRAMMA PER CONVERTIRE UN NUMERO NATURALE a IN BASE 10 AD UN ALTRO IN UNA BASE b#"<<endl;

    //istruzioni iniziali che apparirano a video all'utente
    cout<<endl<<"-Inserisci il numero naturale in base 10 che vuoi convertire:"<<endl;
    cin>>n;

    do{
    cout<<endl<<"-Inserisci la base in cui si vuole convertire il numero:"<<endl;
    cin>>b;
    }while(b<=1);//il compilatore continua a stampare a video l'istruzione fino a che l'utente non inserisce un valore >1

    int i=0;

    // Questo ciclo for risolve la vera e propria conversione
       for(i=0;ris!=0;i++){
       ris=n/b; //la variabile 'ris' assume il valore della divisione fra n e b
       r=n%b; //la variabile r invece assume il valore del resto della divisione fra n e b
       n=ris; //a n viene assegnato il valore corrispondente a quello di ri
       v[i]=r; /*nella cella di indice i, che verrà incrementato fino a che non è conclusa la conversione,
       verrà assegnata ogni volta una cifra del numero convertito. In alcuni casi può essere che ad una cella venga assegnato un numero a più cifre*/

       }

    cout<<endl<<"####################################################################################"<<endl;
    cout<<endl<<"-il numero convertito in base"<<" "<<b<<" "<<"e':"<<endl; //indicazione del risultato in output che comparirà a video all'utente

    //Questo ciclo for permette di stampare a video le cifre, del numero precedentemente convertito, a video
       for(int j=i-1;j>=0;j--)
    {
        cout<<v[j];//il compilatore stamperà a video le cifre, o numeri, a partire dall'ultima cella riempita dal programma fino alla prima, decrementando ogni volta l'indice del vettore
        cout<<" ";
    }
    return 0;
}


