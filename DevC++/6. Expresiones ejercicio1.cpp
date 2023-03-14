#include<iostream>

using namespace std;

int main(){
	
	float a, b, c, d,
	resultado = 0;
	
	cout<<"Digite el primer valor: ";			//Digito el valor
	cin>>a;										//Guardo en memoria el valor
	cout<<"Digite el segundo valor: ";
	cin>>b;
	cout<<"Digite el segundo valor: ";
	cin>>c;
	cout<<"Digite el segundo valor: ";
	cin>>d;
	
	resultado = (a/b) + (c/d);
	
	cout.precision(2);							//Es para redondear el valor en decimal 
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
