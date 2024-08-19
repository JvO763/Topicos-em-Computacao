#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int x, i, j, y, k, t, u;
	j=0;
	y=0;
	t=1;
	cout << "Digite o valor binario: ";
	cin>>x;
	
	do{
	for(i=1;i<=x;i=i*10){
//		cout<<"\n1"<<i;
		j=j+1;
	//	cout<<"\n2" << j;
	}
		k=0;
		t=1;
		for(;k<j-1;k++){
			t=t*2;
		//	cout<<"\n3" << t;
			
		}
		
		y=y+t;
	//	cout<<"\n Y "<< y <<" \n";
		u=1;
		for(;j>1;j--){
			u=10*u;
//			cout<<"\n4" << u;
		}
	x=x%u;
//	cout<<"\n RESTO "<< x <<" \n";
	u=1;
	j=0;
	}
	
	while(x!=0);

	
	cout<<"O resultado eh " << y << endl;
	
	
	
}
