#include<iostream>
using namespace std;
int main(){
	float mayor=0, menor=9000000000000000000000000000000;
	int numero;
	int num;
	int suma;
	float promedio;
	
	cout<<"Ingrese los 10 numeros:"<<endl;
	for (int f= 1;f<= 10;f++) {
		
		cout<<"Valor"<<f<<"=";
		cin>>num;
		suma+=num;
		
		if (num>mayor){
			mayor=num;
		}
		if(num<menor){
			menor=num;
		}
		promedio=suma/10;
	}
	cout <<"El resultado de la suma es:"<<suma<<endl;
	cout<<"El numero menor es:"<<menor<<endl;
	cout<<"El numero mayor es:"<<mayor<<endl;
	cout<<"El promedio es:"<<promedio<<endl;
	
	return 0;
}
