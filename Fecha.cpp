#include <iostream>
using namespace std;
class Fecha{
	private:
	int dia, mes, anio, dia1, mes1, anio1, difdia, difmes, difanio;
	public:
	Fecha (int, int, int, int, int, int );
	void fechai();
	void fechadif();
};

Fecha::Fecha(int _dia, int _dia1, int _mes, int _mes1, int _anio, int _anio1){
	dia=_dia;
	mes=_mes;
	anio=_anio;
	dia1=_dia1;
	mes1=_mes1;
	anio1=_anio1;
	difdia=dia1-dia;
	difmes=mes1-mes;
	difanio=anio1-anio;
}
void Fecha::fechai(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
	cout <<"La nueva fecha es: "<<dia1<<"/"<<mes1<<"/"<<anio1<<endl;
}
void Fecha::fechadif(){
	
	cout<<"han transcurrido: "<<difdia<<"/"<<difmes<<"/"<<difanio<<endl;
}

int main (){
	Fecha fecha1 (1,2,2,3,2000,2005);
	fecha1.fechai();
	fecha1.fechadif();
}