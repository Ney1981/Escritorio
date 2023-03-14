#include<iostream>

using namespace std;

double calcularIva(double p){
	
	double Iva;
	Iva = p * 0.19;
	return Iva;
}

int main(void){
		
		double precioProducto, valorIva;
		
		cout<<"Muestre el precio de la compra: $";
		cin>>precioProducto;
		
		valorIva = calcularIva(precioProducto);
		
		cout<<"\nEl valor de la compra sin iva es: $"<<precioProducto<<endl;
		cout<<"El valor del producto con el IVA includo es: $"<<(precioProducto + valorIva)<<endl;
	
} 
