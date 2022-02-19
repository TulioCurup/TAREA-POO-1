#include "PERSONA.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	
	private : string nit;
			  double cui;
	
	public : 
	Propietario(){
	}
	
	Propietario(string nom,string ape,string dir, string fechan,int tel, string n, double c) : Persona(nom,ape,dir,fechan,tel){
		nit = n;
		cui = c;
	
	}
	//set
	void setNit(string n){nit = n;}
	void setCui(double c){cui = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fechan){fecha_nacimiento = fechan;}
	void setTelefono(int tel){telefono = tel;}
	//get
	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getfecha_nacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	
	
	//
	void mostrar (){
		cout<<"_______________________________"<<endl;
		cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<endl;
		
	}
};
