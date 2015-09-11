#include <iostream>

using namespace std;

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
	int n;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>> n;

	if ( n != 0)
	{
	    cout<<"El numero fibiocciani de "<<(n)<<" es: "<<endl;
		cout<<fibonacci(n)<<endl;
		return main();
	}
}