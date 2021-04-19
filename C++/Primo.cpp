#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	int cont=0,b,num;
	
	cout<<"Digite o Numero: ";
	cin>>num;
	
	for(b=1;b<=num;b++)
	{
		if(num%b==0)
		{
			cont++;
		}	
	}	

	if(cont==2)
	{
		cout<<"primo"<<endl;
	}
	else
	{
		cout<<"Nao eh"<<endl;
	}

	return 0;
}