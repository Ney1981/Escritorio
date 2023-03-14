#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, 
	suma = 0, 
	resta = 0, 
	multiplicacion = 0, 
	divicion = 0;
	
	cout<<"digite un numero: ";	
	cin>>n1;
	
	cout<<"Digite otro numero: ";
	cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	divicion = n1 / n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La muntiplicacion es: "<<multiplicacion<<endl;
	cout<<"La divicion es: "<<divicion<<endl;
	
	return 0;
}
