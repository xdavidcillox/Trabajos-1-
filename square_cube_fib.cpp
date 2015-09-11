//miLib.cpp - implementacion//


//#include "myLib.h"
#include <iostream>

using namespace std;



int square(int x)
{
	return x*x;
}

int cube(int x)
{
	return x*square(x);	
}

int fibonacci(int n)
{
	if (n==0 or n==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}

int main()
{
	int x;
	int a;

		
	cout<<"Ingrese un numero: "<<endl;
	cin>>x;
	
	if ( x != 0)
	{
	
		cout<<"Cuadrado(1) o cubo(2) o fibonacci(3)? "<<endl;
		cin>>a;
	
		if ( a==1  and x != 0)
		{
			cout<<square(x)<<endl;
			return main();
		
		}

		


		if ( a==2  and x!= 0)
		{
			cout<<cube(x)<<endl;
			return main();
		}
		
		if ( a==3  and x!= 0)
		{
			cout<<fibonacci(x)<<endl;
			return main();
		}	
	}
}		
	