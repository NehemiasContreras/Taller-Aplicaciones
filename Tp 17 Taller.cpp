#include<iostream>
using namespace std;
int main(){
	int num,resultado=1;
	
	cout<<"Ingrese su numero:"<<endl;
	cin>>num;
	
	for(int i=1; i<=5; i++){
		resultado *= num;
	}
	
	cout<<"El numero elevado a la quinta potencia es:"<<resultado<<endl;
}
