#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	char matriz[7][7];
	char x, y;
	int i, j, soma, fat[6];
	char vet[7];
	vet[0]='a';
	vet[1]='b';
	vet[2]='a';
	vet[3]='c';
	vet[4]='a';
	vet[5]='x';
	vet[6]='i';
	
	soma=0;
	x='i';
	y='x';
	i=0;
	j=0;
	matriz[0][0]='a';

	matriz[0][1]='b';
	matriz[0][2]='a';
	matriz[0][3]='c';
	matriz[0][4]='a';
	matriz[0][5]='x';
	matriz[0][6]='i';
	
	fat[5]=1;
	fat[4]=1;
	fat[3]=1;
	fat[2]=1;
	fat[1]=1;
	fat[0]=1;
	
	for(i=1;i<=6;i++){
		
		matriz[i][0]=x;
		
		for(j=1;j<=6;j++){
			
			switch(x){
			
				case 'a':
					if(y=='i'){
						x='b';
						y='a';
						
					}
					else if(y=='b'){
						x='c';
						y='a';
						
					}
					else if(y=='c'){
						x='x';
						y='a';	
									
					};
					matriz[i][j]=x;
					break;
				
				case 'b':
					x='a';
					y='b';
					matriz[i][j]=x;
					
					break;	
				
				case 'i':
					x='a';
					y='i';
					matriz[i][j]=x;
					
					break;
				
				case 'x':
					x='i';
					y='x';
					matriz[i][j]=x;
					
					break;						

				case 'c':
					x='a';
					y='c';
					matriz[i][j]=x;
					
					break;
				
		
			}
			
			
		}
	}
	
	for(i=0;i<=6;i++){
		for(j=0;j<=6;j++){
			cout<<matriz[i][j];	
		}
		cout<<endl;
	}
	for(j=6;j>0;j--){
	
		for(i=j;i>0;i--){
			fat[j-1]=fat[j-1]*i;
		}
		
	}
	
	
	
for(i=6;i>=0;i--){
		for(j=0;j<=6;j++){
			
			if(matriz[i][j]=='a'){
				if(matriz[i][j+1]=='b'){
																//através de analises combinatorias, é possivel combinar as letras de maneira a formar 'abacaxi' e prever a quantidade de formas para isso ocorrer, 
					if(i==0){									//caso fosse uma palavra com 8 letras, os fatoriais se alterariam um pouco e é possível fazer com que o programa mudasse facilmente atraves de "for's".
						soma=soma+(fat[5]/fat[5]);				//soma=soma+((6*5*4*3*2*1)/(6*5*4*3*2*1));
					}											
					if(i==1){
						soma=soma+(fat[5]/(fat[4]*fat[0]));		//soma=soma+((6*5*4*3*2*1)/((5*4*3*2*1)*1));
					}
					if(i==2){
						soma=soma+(fat[5]/(fat[3]*fat[1]));		//soma=soma+((6*5*4*3*2*1)/((4*3*2*1)*(2*1)));
					}
					if(i==3){
						soma=soma+(fat[5]/(fat[2]*fat[2]));		//soma=soma+((6*5*4*3*2*1)/((3*2*1)*(3*2*1)));
					}
					if(i==4){
						soma=soma+(fat[5]/(fat[3]*fat[1]));		//soma=soma+((6*5*4*3*2*1)/((4*3*2*1)*(2*1)));
					}
					if(i==5){
						soma=soma+(fat[5]/(fat[4]*fat[0]));		//soma=soma+((6*5*4*3*2*1)/((5*4*3*2*1)*1));
					}
					if(i==6){
						soma=soma+(fat[5]/fat[5]);				//soma=soma+((6*5*4*3*2*1)/(6*5*4*3*2*1));
					}
				}
				if(matriz[i][j]=='a'){
					if(matriz[i-1][j]=='b'){
						if(j==6){
							soma=soma+1;
						}
					}
			}
			
		}
		
	}
}
	cout<<"A palavra 'abacaxi' apareceu "<<soma<<" vezes.";
	
	
}	

	


