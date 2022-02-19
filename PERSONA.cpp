#include <iostream>
using namespace std;
class Persona{
	protected : string nombres, apellidos,direccion, fecha_nacimiento;
		int telefono;
	protected :
			Persona(){
			}
			Persona(string nom,string ape, string dir, string fechan, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fechan;
				telefono = tel;
			}
	
		
	void mostrar();
		 
};

