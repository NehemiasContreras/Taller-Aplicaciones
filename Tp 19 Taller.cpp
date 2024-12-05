#include<iostream>
using namespace std;
int main()
{
	int n;
	int resultado=1;
	
	cout<<"Ingrese porfavor un numero entero que quiera obtener su factorial: "<<endl;
	cin>>n; 
	if(n<0){
	resultado=0;
    }
    else if (n==0)
    {
    	cout<<"Error";
    	return 0; 
	}
    else
    {
	
	for(int i=1;i<=n;i++)
	{
		resultado=resultado*i;
	}
}
	cout<<"El resultado es: "<<resultado<<endl;	
}
