#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	float x, y, teste;
	cout<<"Digite valores de x e y: ";
	cin>>x;
	cin>>y;
	if(x>=0&&y>=0){
		
		teste=x*x+y*y;
		
	};

	if(teste<=1){
		cout<<"Os valores pertencem a H.";
	}
	else{
		cout<<"Nao pertencem.";
	}

	
}
