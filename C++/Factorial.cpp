// Factorial
#include <iostream>

using namespace std;

int main()
{
	cout<< "Factorial" <<endl;
	cout<< "Introduza Um Numero" <<endl;

	int num,i,factorial=1;
	cin>>num;
	
	for(i=1; i<=num; i++)
	{
		factorial*=i;
		
	}
cout<<factorial<<endl;
 return 0;
}

