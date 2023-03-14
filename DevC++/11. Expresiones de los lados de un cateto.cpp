#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double C1, C2, h;
	
	cout<<"Digite el primer cateto: ";
	cin>>C1;
	cout<<"Digite el segundom cateto: ";
	cin>>C2;
	
	/*sqrt ; significa la raiz cuadrada
	  pow ; va a elevar la funcion al caudrado
	*/
	h = sqrt(pow(C1,2) + pow(C2,2));			
	
	cout<<"\nLa hipotenusa es: "<<h<<endl;
	
	return 0;
}
