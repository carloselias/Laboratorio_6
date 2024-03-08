//Directivas de pre-procesador
#include <iostream> //header
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std; //el espacio de nombres standard
class CuentaBancaria
{
	private:
		string nbretlar,nocta;
		int saldo;
	public:
		CuentaBancaria(string nt1,string nc1,int s1)
		{
			nbretlar=nt1;
			nocta=nc1;
			saldo=s1;
		}
		void mi1()
		{
			cout<<"nombre del titular > "<<nbretlar<<endl<<"numero de la cuenta > "<<nocta<<endl<<"saldo > Q"<<saldo<<endl;
		}
		void ss1()
		{
			int sn1;
			cout<<"que saldo se ha depositado? > ";
			cin>>sn1;
			saldo+=sn1;
			cout<<"saldo? > Q"<<saldo;
		}
		void rs1()
		{
			int rn1;
			cout<<"que saldo se ha retirado? > ";
			cin>>rn1;
			saldo-=rn1;
			cout<<"saldo? > Q"<<saldo;
		}
};
int main()
{
	char op1;
	CuentaBancaria tr1("Irani rodriguez","75634",1504);
	tr1.mi1();
	cout<<"que desea hacer?"<<endl<<"a) depositar saldo"<<endl<<"b) retirar saldo"<<endl<<"> ";
	cin>>op1;
	if	(op1=='a') 
		tr1.ss1();
	else if(op1=='b') 
		tr1.rs1();
}