#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, i;
	cout<<"Qual numero da sequencia de Fibonacci voce quer? Ex: 3 para escolher o terceiro numero. \n";
	cin>>n;
	a=1;
	b=0;
	c=0;
	if(n==2||n==1){
		cout<<"O valor eh 1.";
	}
	else{
	for(i=1;i<n;i++){
		c=a;
		a=a+b;
		b=c;
		
		
		
	};
	cout<< "O valor eh " << a <<" !!";
	};
}
	
