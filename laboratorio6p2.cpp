//Directivas de pre-procesador
#include <iostream> //header
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std; //el espacio de nombres standard
class estudiante
{
	private:
		string nombre,apellido,curso;
		int edad;
	public:
		estudiante(string n1,string a1,int e1,string c1)
		{
			nombre=n1;
			apellido=a1;
			edad=e1;
			curso=c1;
		}
		void mi1()
		{
			cout<<"nomre del estudiante > "<<nombre<<endl<<"apellido > "<<apellido<<endl<<"edad > "<<edad<<endl<<"curso > "<<curso<<endl;
		}
};
int main()
{
	estudiante ee1("Carlos","Aguilar",8,"ciencias sociales");
	ee1.mi1();
	estudiante ee2("Mateo","Rodriguez",7,"comunicacion");
	ee2.mi1();
	return 0;
}