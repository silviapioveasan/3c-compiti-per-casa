#include <iostream>
int main()
{
int Numero(int num),N(int)
 {
for(int i = 2; i<num/2 ; i++)
if (num%i == 0) return 0;
return 1;
}
{ int cont = 0;
for(int i = 2; cont<N; i++)
if(Numero(i))
 {
cout<<i<<"\t";
cont++;
}
system("PAUSE");
}
};
