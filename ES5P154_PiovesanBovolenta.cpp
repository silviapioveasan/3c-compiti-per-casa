#include <iostream>
#include <math.h>
using namespace std;

void dimensioneVettore(int&);
void valoreVettore (int [], int);
double radiceSomma (int[], int);

int main()
{
    int vet[10];
    int dim;
    dimensioneVettore(dim);
    valoreVettore(vet,dim);
    cout<<"La radice quadrata della somma dei quadrati delle componenti di indie dispari e': "<<endl;
    cout<<radice(vet,dim);

}

void dimensioneVettore (int&dim){
do{
    cout<<"Inserisci il numero di elementi : "<<endl;
    cin>> dim;
	}while(dim>10 || dim<0);
}

void valoreVettore(int v[],int dim){
	
for(int i=0;i<dim;i++){
   						cout<<"\nInserisci il valore numero "<<i+1<<": ";
   						cin>> v[i];
					  }
}


double radiceSomma (int v[],int dim){
	
int s;
double rad;
for(int i=0;i<dim;i++){
	
   					 if(v[i]%2==0){
           							cout<<"0"<<endl;
    							  }
    else{
        s=s+(v[i]*v[i]);
    }
}

r=sqrt(s);
return r;
}
