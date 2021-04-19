//letra maiuscula ou minuscula
#include <iostream>

using namespace std;

int main()
{
	cout<< "programa que determina se uma letra e maiuscula ou minuscula  " <<endl;
	cout<< "Introduza a letra" <<endl;
	
	bool letra_logica;
	
	char m[26],a[24],letra;	
	m[0]='a';	m[1]='b';	m[2]='c';	m[3]='d';	m[4]='e';	m[5]='f';	m[6]='g';	m[7]='h';	m[8]='i';	m[9]='j';	m[10]='k';	m[11]='l';	m[12]='m';	
	m[13]='n';	m[14]='o';	m[15]='p';	m[16]='q';	m[17]='r';	m[18]='s';	m[19]='t';	m[20]='u';	m[21]='v';	m[22]='w';	m[23]='x';	m[24]='y';	m[25]='z';

	a[0]='A';	a[1]='B';	a[2]='C';	a[3]='D';	a[4]='E';	a[5]='F';	a[6]='Gg';	a[7]='H';	a[8]='I';	a[9]='J';	a[10]='K';	a[11]='L';	a[12]='M';
	a[13]='N';	a[14]='O';	a[15]='P';	a[16]='Q';	a[17]='R';	a[18]='S';	a[19]='T';	a[20]='U';	a[21]='V';	a[22]='W';	a[23]='X';	a[24]='Y';	a[25]='Z';

	cin>>letra;
	
	for(int i=0; i<26; i++)
	{
		for(int j=0;j<26; j++)
		{
			for(int k=0;k<2; k++)
			{
				if(letra==a[i])
				{
					letra_logica = false;
				}
				else if(letra==m[j])
				{
					letra_logica= true;
					
				}
			}
		}
	}
	
	if(letra_logica == false) {
		cout<<"Eh Maiuscula"<<endl;
	}
	if(letra_logica==true) {
		cout<<"Eh Minuscula"<<endl;
	}
	
 return 0;
}

