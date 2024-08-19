#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	
	int i, j, x, soma;
	char vet[100], vet2[100];
	int trian[100][100];
	
	cout<<"Insira a palavra: ";
	cin>>vet;
//	cout<<vet;
	
	for(i=0;i>=0;i++){
		if(vet[i] == '\0'){
		//	cout<<"oi "<<i<<endl;
			x=i;
			//cout<<x;
			i=-2;
			
		}
	}
	
	char palavra[x];
	char matriz[x][x];
	
	for(i=0;i<x;i++){
		vet2[i]=vet[x-i-1];
	}



	for(i=0;i>x;i++){
		palavra[i]=vet[i];	
		}
		
	
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
		
			matriz[i][j]='.';	
			
		}	
	}
	
	for(i=0;i<x;i++){
		for(j=0;(j+i)<x;j++){
		
			matriz[i][j+i]=vet[j];	
		//	cout<<j;
		}
	}
	
	for(j=0;j<x;j++){
		for(i=1;(j+i)<x;i++){
		if(i+x!=j){
			matriz[i+j][j]=vet2[i-1];	
		//	cout<<j;
		}
		if(i+x==j){
			i=x;
		}
			
		}	
	}
	
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
		
			cout<<matriz[i][j];
			
		}
		cout<<endl;
	}
	
	
	for(i=0;i<=x;i++){
		for(j=0;j<=x;j++){
			
			trian[i][j]=0;
			if(i==j){
			trian[i][j]=1;	
			};
			if(j==0){
			trian[i][j]=1;	
			};
			
		}
	}
	
	for(i=2;i<=x;i++){
		for(j=1;j<=x-1;j++){
		//	cout<<j;
			if(i==j){
				i=i+1;
				j=1;
			}
			trian[i][j]=trian[i-1][j]+trian[i-1][j-1];
			
			
		}
	}
	
	for(i=0;i<x;i++){
		
		for(j=0;j<x;j++){
		//	cout<<trian[i][j]<<" ";	
			}
		cout<<endl;
			
		}
	
	soma=0; 
	
	
		for(j=0;j<x;j++){
			soma=soma+trian[x-1][j];	
			}
		cout<<endl;
			
		
		
	cout<<"O numero de vezes que a palavra "<<vet<<" aparece eh "<<soma;
}
	
	
	

	


