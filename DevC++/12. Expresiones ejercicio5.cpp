#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x, y, 
	resultado = 0;
	
	cout<<"Digite el valor X: ";
	cin>>x;
	cout<<"Digite el valor Y: ";
	cin>>y;
		
	resultado = (sqrt(x)) / (pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
		
	
	return 0;
}
