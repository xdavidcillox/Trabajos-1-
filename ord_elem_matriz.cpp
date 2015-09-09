#include <iostream>
using namespace std;

void ordenar (int x[10]);

int main()

{

	int x [10];
	int i;
	
    cout<<"Ingrese varios numeros: "<<endl;
    
	for(i = 0; i < 10; i++)
	{
		
		cin>>x[i];
	}

	
	cout<<"La matriz es: "<<endl;

	for(i = 0; i < 10; i++)
	{
		cout<< x[i]<<" ";
	}
	cout<<""<<endl;
	
	cout<<"La matriz ordenada es: "<<endl;
	
	ordenar(x);

	for(i = 0; i < 10; i++)
	{
		cout<< x[i]<<" ";
	}

	
}


void ordenar(int x[10])

{
	int cambio;
	int i,j;

	for (i = 1; i < 10; i++ )
	{
		for (j = 0; j < 9; j++)
		{
			if(x[j]>x[j+1])
			{
				cambio = x[j];
				x[j] = x[j+1];
				x[j+1] = cambio;
			}
		}
	}
}
