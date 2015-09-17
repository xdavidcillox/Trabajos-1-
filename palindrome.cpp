// Example program
#include <iostream>
#include <string>

using namespace std;

void pal(int [],int);
int main()
{
        int a[100];
        int flag=0;
        
        int size;
        cout<<"Enter size of array: ";
        cin>>size;
        cout<<"Fill array: "<<endl;
        for(int i=0;i<size;i++)
                cin>>a[i];
                
        
}


void pal(int a[],int size)
{
        for(int i=0;i<(size/2);i++)
            {    if(a[i]==a[size-i-1])
                    {    cout<<"palindromo"<<endl;;}
                else
                    {    cout<<"no es palindromo"<<endl;}
            }
            
}
