#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Ingrese el numero:"<<endl;
	cin>>num;
	
	while (num >= 0.01){
		num /=2;
		cout<<"El resultado paso a paso es:"<<num<<endl;
	}
	
	return 0;
}
