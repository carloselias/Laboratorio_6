//Directivas de pre-procesador
#include <iostream> //header
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std; //el espacio de nombres standard
class libro
{
	private:
		string titulo,autor;
		int dia,mes,a1;
	public:
		libro(string t1,string ar1,int d1, int m1, int a2)
		{
			titulo=t1;
			autor=ar1;
			dia=d1;
			mes=m1;
			a1=a2;
		}
		void mi1()
		{
			cout<<"titulo del libro > "<<titulo<<endl<<"autor > "<<autor<<endl<<"fecha de publicacion > "<<dia<<"/"<<mes<<"/"<<a1<<endl;
		}
};
int main()
{
	libro l1("El viaje a la semilla","Gabriel Garcia Marquez",6,6,1997);
	l1.mi1();
	libro l2("Las redes del caos","Max fisher",7,7,2018);
	l2.mi1();
	return 0;
}