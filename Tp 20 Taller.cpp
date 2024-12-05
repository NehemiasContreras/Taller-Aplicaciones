#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese un numero entero positivo:";
	cin>>n;
	
	if(n <= 0){
		cout<<"El numero tiene que ser entero positivo"<<endl;
		return 1;
	}
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= n; ++j){
			if(j < i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
		}
		return 0;
	}
