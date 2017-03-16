#include <iostream>
using namespace std;

void dimensioneVettore(int&);
void valoreVettore (int [], int);
void prodottoPari (int [], int);
void sommaDispari (int [], int);

int main()
{
	int vet[10], dim;
	dimensionevettore (dim);
    valoreVettore (vet, dim);
    prodottoPari (vet, dim);
    sommaDispari(vet, dim);	
}

void dimensioneVettore (int&dim)
{
	do{
		cout<<"Inserisci il numero di elementi: "<<endl;
		cin>>dim;
	}while (dim>10 || dim <0);
}

void valoreVettore (int v[], int dim)
{
	for (int i=0;i<dim;i++)
	{
		cout<<"Inserisci il valore degli elementi "<<i+1<<": "<<endl;
		cin>>v[i];
	}
}


void prodottoPari (int v[], int dim)
{
	int prodotto=1;
	
	for (int i=0;i<dim;i++)
	{
		if(v[i]%2==0){
			prodotto=prodotto*v[i];
		}
		
	}
		cout<<"Il prodotto dei numeri pari e' : "<<prodotto<<endl;	
		}
	


void sommaDispari (int v[], int dim)
{
	int somma=0;
	
	for (int i=0;i<dim;i++)
	{
		if(v[i]%2!=0){
			somma=somma+v[i];
		}		
	}
		cout<<"\n\nLa somma dei numeri dispari e': "<<somma;	
		}
	
	

