#include <iomanip>
#include <iostream>

using namespace std;

class raiz{
	private:
		int vezes;
		float valor;
	public:
		quadrada(float x){
			valor=x;
			float i, j;
			i=0;
			
			
			for(;i>=0;){
				
				i=i+0.000001;
			//	cout<<i<<endl;
				
				if((i*i)>=x){
					j=i;
					i=-1;
				}
				
			}
			cout<<j<<endl;
		}
		
	
};

class integral{
	private:
		
	public:
		pi(float *n){
			float x1, x2, y1, y2, k, area;
			area=0;
			
			for(k=0;k<=1;){
				
				x1=k;
				x2=k+0.0001;
				y1=(1)/(1+x1*x1);
				y2=(1)/(1+x2*x2);
				area=area+((y1+y2)*(x2-x1)/2);
				
				
				k=k+0.0001;
				
			}
			*n=4*area;
			
		}
};

int main(){
	
	char fig, v, a, yn;
	float pit, x, y, number;
	
	integral i1;
	i1.pi(&pit);
//	cout<<pit<<endl;
	
	cout<<"Voce pretende calcular volumes de figuras 3D ou areas de figuras 2D?"<<endl<<"Insira 'A' para figuras 3D ou 'B' para figuras 2D: ";
	cin>>fig;
	
	if(fig=='A'){
		cout<<"Qual figura geometrica voce deseja calcular: "<<endl;
		cout<<"A - Cubo"<<endl<<"B - Esfera"<<endl<<"C - Cone"<<endl;
		cin>>v;
		if(v=='A'||v=='a'){
			cout<<endl<<"Insira o valor do lado do cubo: ";
			cin>>x;
		//	cout<<x;
			cout<<endl<<"Volume do Cubo eh igual a: "<<x*x*x;
		}
		else if(v=='B'||v=='b'){
			cout<<endl<<"Insira o valor do raio da Esfera: ";
			cin>>x;
			cout<<endl<<"Volume da Esfera eh igual a: "<<4*pit*x*x*x/3;
		}
		else{
			cout<<endl<<"Insira o valor do raio do Cone: ";
			cin>>x;
			cout<<endl<<"Insira o valor da altura do Cone: ";
			cin>>y;
			cout<<endl<<"Volume do Cone eh igual a: "<<y*pit*x*x/3;
			
		}
		
		
	}
	else{
		cout<<"Qual figura geometrica voce deseja calcular: "<<endl;
		cout<<"A - Quadrado"<<endl<<"B - Circulo"<<endl<<"C - Triangulo equilatero"<<endl;
		cin>>a;
		if(a=='A'||a=='a'){
			cout<<endl<<"Insira o valor do lado do Quadrado: ";
			cin>>x;
			cout<<endl<<"Area do Quadrado eh igual a: "<<x*x;
		}
		else if(a=='B'||a=='b'){
			cout<<endl<<"Insira o valor do raio do circulo: ";
			cin>>x;
			cout<<endl<<"Area da circulo eh igual a: "<<pit*x*x;
		}
		else{
			cout<<endl<<"Insira o valor da base do Triangulo: ";
			cin>>x;
			cout<<endl<<"Insira o valor da altura do Triangulo: ";
			cin>>y;
			cout<<endl<<"Area do Triangulo eh igual a: "<<y*x/2;
			
		}
	}
	
	cout<<endl<<"Gostaria de calcular uma raiz quadrada? Sim: S || Não: N"<<endl;
	cin>>yn;
	if(yn=='S'||yn=='s'){
	
	cout<<"Insira o valor que quer na raiz: ";
	cin>>number;
	
	raiz r1;
	r1.quadrada(number);
	cout<<"Tchau!";
	
}
else{
	cout<<"Tchau!";
}
	
	
	
	
}
