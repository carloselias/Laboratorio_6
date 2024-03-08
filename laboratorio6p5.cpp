//Directivas de pre-procesador
#include <iostream> //header
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std; //el espacio de nombres standard
class pelicula
{
	private:
		string titulo,director;
		int dia,mes,a1;
	public:
		pelicula(string t1,string dr1,int d1, int m1, int a2)
		{
			titulo=t1;
			director=dr1;
			dia=d1;
			mes=m1;
			a1=a2;
		}
		void mi1()
		{
			cout<<"titulo de la pelicula > "<<titulo<<endl<<"director > "<<director<<endl<<"fecha de publicacion > "<<dia<<"/"<<mes<<"/"<<a1<<endl;
		}
};
int main()
{
	pelicula p1("Un gran dinosaurio","Peter Sohn",25,11,2015);
	p1.mi1();
	pelicula p2("Wonka","Paul King",8,12,2023);
	p2.mi1();
	return 0;
}