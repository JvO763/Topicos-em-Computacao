#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int exp, i;
	float n, x;
	x=1;
	
//	printf("hehe");
	cout << "Digite o valor a ser elevado: ";
	cin>>n;
	cout<<"Agora digite o valor do expoente: ";
	cin>>exp;
	
	for(i=1;i<=exp;i++){
		x=n*x;
		
	};
	
	cout<<"O resultado eh " <<x << endl;
	
	
	
}
