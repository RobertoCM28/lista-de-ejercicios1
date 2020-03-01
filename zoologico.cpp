#include<stdio.h>
#include<iostream>
using namespace std;
class Zoologico{
	private:
	int edad, salud, peso, dia, mes, anio, dia1, mes1;
	public: 
	Zoologico (int, int, int, int, int, int);
	void info();
	void alimentar();
	void revision();
};
Zoologico::Zoologico(int _edad, int _salud, int _peso, int _dia, int _mes, int _anio ){
	edad=_edad;
	salud=_salud;
	peso=_peso;
	dia=_dia;
	mes=_mes;
	anio=_anio;
	dia1=dia+1;
	mes1=mes+1;
}
void Zoologico::info(){
	cout<<"Nombre: S"<<endl;
	cout<<"Tipo; Gorila"<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Salud: "<<salud<<endl;
	cout<<"Peso: "<<peso<<endl;
	cout<<"Nacimiento: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
void Zoologico::revision(){
	cout<<"se esta revisando"<<endl;
	cout<<"la revision ha finalizado, la salud es: 1"<<endl;
	cout<<"La siguiente revision es: "<<dia1<<"/"<<mes1<<"/"<<anio<<endl;
}
void Zoologico::alimentar(){
	cout<<"S esta comiendo"<<endl;
	cout<<"S ha termiando de comer"<<endl;
}
int main (){
	Zoologico animal1=Zoologico(2,1,2,28,3,2000);
	animal1.info();
	animal1.revision();
	animal1.alimentar();
}