#include <stdlib.h>
#include <stdio.h>

using namespaces std;

main ()
{
	int i,j;
	int array [100];
	/* inizializza vettore a 1 */
	for (i=0;i<100;i++)
	
	array[i] = 1;
	
	for (i=2;i=100;i++)
	{
		if(array[i]==1)
		{
			for (j=2;j<(100/i)+1;j++)
			array [i*j]=0; //celle di indice pari
		}
	}
    
	printf("\n numeri primi <100 \n");
     	for (i=1; i<100; i++)
     	{
     		if (array[i]==1) printf ("\t%d",i);
     	}
	sistem ("PAUSE");
}
