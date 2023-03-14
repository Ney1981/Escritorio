#include<iostream>

using namespace std;

int main(){
	int x, y, 
	aux;
	
	cout<<"\nDigite el valor de x: ";
	cin>>x;
	cout<<"Digite el valor de y: ";
	cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de X es: "<<x<<endl;
	cout<<"El nuevo valor de Y es: "<<y<<endl;
	
	return 0;
}
