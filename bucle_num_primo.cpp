#include <iostream>

using namespace std;

int main ()	

{
	int a,i,n;
	a = 0;

    
        cout<<"Ingresa un numero: "<<endl;
	    cin>>n;
	    
	    
	    
    while (n!=0)
    
    
    {  
        	for( i = 1; i < (n+1); i++)
        	{  
            	if(n%i==0)
            	{  
                    a++;  
                }  
                    
        	}
        	
        	if(a!=2)
            {  
            	cout<<"No es Primo";  
            }
                   	
            else
            {  
                cout<<"Si es Primo";  
            }
              
            return 0; 
    }
	
}
