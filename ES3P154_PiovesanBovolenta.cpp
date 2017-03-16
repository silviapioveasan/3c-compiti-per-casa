
#include <iostream>
using namespace std;

void dimensioneVettore(int&); //Questa funzione assegna una dimensione al vettore
void vettore (int [], int); //Questa funzione assegna i vari valori
void invertiVettore (int [], int); //Questa funzione stampa i valori del vettore in ordine inverso


int main()
{
	int vet[10], dim;
	dimensioneVettore (dim);
    vettore (vet, dim);
    invertiVettore (vet, dim);
   	
}

void dimensione (int&dim)
{
	do{
		cout<<"Inserisci il numero di elementi: "<<endl;
		cin>>dim;
		
	}while (dim>10 || dim <0);
}

void vettore (int v[], int dim)
{
	for (int i=0;i<dim;i++)
	{
		cout<<"Inserisci il valore degli elementi "<<i+1<<": "<<endl;
		cin>>v[i];
	}
}


void invertiVettore (int v[], int dim)
{
	cout<<"Ecco l'ordine invertito degli elementi': "<<endl;
	
	for (int i=dim-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
	
}
