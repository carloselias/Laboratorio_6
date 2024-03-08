//Directivas de pre-procesador
#include <iostream> //header
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std; //el espacio de nombres standard
class estudiante
{
	private:
		int no1,no2;
	public:
		estudiante(int n1,int n2)
		{
			no1=n1;
			no2=n2;
		}
		void mi1()
		{
			cout<<"suma > "<<no1<<"+"<<no2<<"="<<no1+no2<<endl<<"resta > "<<no1<<"-"<<no2<<"="<<no1-no2<<endl<<"multiplicacion  > "<<no1<<"*"<<no2<<"="<<no1*no2<<endl<<"division > "<<no1<<"/"<<no2<<"="<<no1/no2<<endl<<"--------------------------------"<<endl;
		}
};
int main()
{
	estudiante pqn1(56,89);
	pqn1.mi1();
	estudiante pqn2(72,64);
	pqn2.mi1();
	return 0;
}