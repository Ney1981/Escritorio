#include<iostream>

using namespace std;

int main(){						//a + b/c / d + e/f : ecuacion a resolver.
	
	float a, b, c, d, e, f,
	resultado;
	
	cout<<"Digite el primer valor; ";
	cin>>a;
	cout<<"Digite el segundo valor; ";
	cin>>b;
	cout<<"Digite el tercer valor; ";
	cin>>c;
	cout<<"Digite el cuarto valor; ";
	cin>>d;
	cout<<"Digite el quinto valor; ";
	cin>>e;
	cout<<"Digite el sexto valor; ";
	cin>>f;
	
	resultado = (a + (b/c))/(d +(e/f));
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
		
	return 0;
}
