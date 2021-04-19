#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int a, b,c, d, x1, x2;
	
	char equacao[10], parte_a[4], parte_b[5], parte_c[5];
	// Pegar valores
	cout<<"f(x) = ax^2 + bx + c"<<endl;
	
	cout<<"Introduza os valores de a, b, c"<<endl;
	
	

	 //Capturar os valores
	cout<<"a= ";
		cin>>a;
	cout<<"b= ";
		cin>>b;
	cout<<"c= ";
		cin>>c;
		
	// Verifica se `a` eh igual a zero
	if(a== 0) {
		cout<<"o valor de `a` nao pode ser igual a `0`" <<endl;
		return 0;
	}
	
	// Calcula valor de Delta
	d = pow(b,2)- (4*a*c);
	
	// Mostra as operacoes
	cout<<"\n \n Calculo para determinar valor de Delta"<<endl;
	cout<<"d = b^2 -4ac"<<endl;
	cout<<"d = "<<b<<"^2 - 4 * "<<a<<" * "<<c<<endl;
	cout<<"d = "<<pow(b,2)<<- 4* a * c <<endl;
	cout<<"d = "<<d<<endl;	
	
	// Verifica o valor de delta
	if(d > 0) 
		cout<< "Tem raizes diferentes" <<endl;
	else if(d == 0) 
		cout<< "Tem raizes Iguais" <<endl;
	 else {
		cout<< "nao tem raizes em R" <<endl;
		return 0;
	}
 
    // Calculo de raizes da equacao
	x1 = (-b+sqrt(d))/2*a;
	x2 = (-b-sqrt(d))/2*a;
	
	// mostra resolucao de x1 e x2
	cout<<"\n \n Calculo para determinar valor das Raizes "<<endl;
	cout<<"X12 = (-b -+sqrt(d))/2a"<<endl;
	cout<<"X12= "<<b<<"+- sqrt("<< d <<" ) / "<<2<<" * "<<a<<endl;
	cout<<"X12= "<< b << "+-" <<sqrt(d) <<"/"<<2*a<<endl;

	cout<<"X1= "<< b << "-" <<sqrt(d) <<"/"<<2*a<<endl;
    cout<<"X2= "<< b << "+" <<sqrt(d) <<"/"<<2*a<<endl;	

	
	cout<<"X1= "<<(-1)* x1<<endl;   
	cout<<"X2= "<<(-1)*  x2<<endl;   
	
	return 0;
}