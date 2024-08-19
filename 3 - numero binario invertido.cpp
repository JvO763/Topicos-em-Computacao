#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int x, x1, y, j, i, xt, i1, n, res, p, i2;
	i=0;
	res=0;
	
	cout<<"Insira o valor: ";
	cin>>x;

	for(j=1;j>0;j=j*2){
		xt=x;
		i=i+1;
		if(xt/j==0){
			i=i-1;
//			cout<<"\n j: " << i;
			j=0;
		};
	}
	
	for(i1=1;i1<=i;i1++){
	
	
		
	y=xt%2;
	xt=xt/2;
//	cout<<"\n x: " << xt;
//	cout<<"\n y: " << y;
	
		p=1;
		for(i2=1;i2<i1;i2++){
			p=p*10;
//			cout<<"\n p: " << p;
		}

	res=res+y*p;

}

	cout<<"\n resultado: " << res;

}
