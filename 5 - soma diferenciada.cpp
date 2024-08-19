#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	float x, i, y;
	y=0;
	cout<<"Digite valores de x: ";
	cin>>x;

	for(i=0;i<x;i++){
		y=y+((1+i)/(x-i));
	//	cout<<"\nO resultado da soma eh: " << y << " " <<i<<"\n";
	};
	
	cout<<"O resultado da soma eh: " << y;
	
	
	
	
	
}
