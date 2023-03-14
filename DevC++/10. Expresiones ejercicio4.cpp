#include<iostream>

using namespace std;

int main(){
	
	float practica, teoria, participacion, nota_final;
	
	cout<<"Digite la nota de pratica: ";
	cin>>practica;
	cout<<"Digite la nota de teoria: ";
	cin>>teoria;
	cout<<"Digite la nota de parcipacion: ";
	cin>>participacion;
	
	practica *= 0.30;									//tambien podemos escribir( practica = practica * 0.30 )
	teoria *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teoria + participacion;
	
	cout<<"\nLa nota final es: "<<nota_final<<endl;
	
	return 0;
}
