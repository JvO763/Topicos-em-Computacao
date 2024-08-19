#include <iomanip>
#include <iostream>

using namespace std;

class parado {
private:
public:
	para(void){
		float vet[9], pick;
		int i;
		for (i = 0; i <= 8; i++) {
			cout << "Insira o  numero " << i + 1 << ": ";
			cin >> vet[i];
		}

		cout << "Insira o  numero que quer procurar: ";
		cin >> pick;

		for (i = 0;vet[i] != pick; i++) {
		}
		cout << "O termo numero " << i + 1 << " eh o termo procurado";
	}

};

class continuo {
private:
public:
	vai(void){
		float vet[9], pick;
		int i;
		for (i = 0; i <= 8; i++) {
			cout << "Insira o  numero " << i + 1 << ": ";
			cin >> vet[i];
		}

		cout << "Insira o  numero que quer procurar: ";
		cin >> pick;

		for (i = 0; i<=8 ; i++) {
			if(vet[i]==pick){
			cout << endl << "O termo numero " << i + 1 << " eh um dos termos procurados";	
				
			}
		}
		
	}

};

class maiormenor {
private:
public:
	mm(void){
		float vet[9], maior, menor;
		int i;
		for (i = 0; i <= 8; i++) {
			cout << "Insira o  numero " << i + 1 << ": ";
			cin >> vet[i];
		}

		menor=vet[0];
		maior=vet[0];
		
		for (i = 1; i<=8 ; i++) {
			if(vet[i]>maior){
			maior=vet[i];				
			}
		}
		
		for (i = 1; i<=8 ; i++) {
			if(vet[i]<menor){
			menor=vet[i];				
			}
		}
		
		cout<<endl<<"O maior valor eh "<<maior<<" e o menor eh "<<menor;
		
	}

};

class moda {
private:
public:
	mod(void){
		float vet[9], j, vez[9], maio;
		int i, n, k, cont, z, souma;
		for (i = 0; i <= 8; i++) {
			cout << "Insira o  numero " << i + 1 << ": ";
			cin >> vet[i];
		}

		for(k=0;k<=8;k++){
		
		for (i = 1; i<=8 ; i++) {
			if(vet[i]<vet[i-1]){
			j=vet[i];
			vet[i]=vet[i-1];
			vet[i-1]=j;
			i=1;
			}
		}
		}
		
		for (i = 0; i<=8 ; i++) {
			vez[i]=0;
		}
		
		n=0;
		
		for (i = 1; i<=8 ; i++) {
			if(vet[i-1] != vet[i]){
				n=n+1;
			}
		}
		
	//	cout<<endl<<n<<endl;
		
		for (i = 0; i<=n ; i++) {
			vez[i]=1;
			}
		
		z=1;
		for (k = 0; k<=n ; k++) {
			
			for (i = z; i<=8 ; i++) {
		
				if(vet[i]==vet[i-1]){
					
					vez[k]=vez[k]+1;
//					cout<<endl<<"UHULLLLLL "<<vet[i]<<" "<<vet[i-1]<<" "<<i;
					
				}
				if(vet[i]!=vet[i-1]){
					z=i+1;
					i=9;
//				cout<<"UHULLLLLL "<<z;	
				}
			
			}
				
		}
		
		for(i=0;i<=8;i++){
//			cout<<endl<<vez[i];
			
		}
		cout<<endl;
		for(i=0;i<=8;i++){
//			cout<<endl<<vet[i];
			
		}
		maio=vez[0];
		for (i = 1; i<=8 ; i++) {
			if(vez[i]>maio){
			maio=i;				
			}
			
			
		}
		souma=0;
			for(i=0;i<maio;i++){
				souma=souma+vez[i];
			}
			
		
			
			cout<<"A moda eh "<<vet[souma];
		
	}

};

int main()
{
	char oq;
	parado p1;
//	p1.para();
	
	continuo c1;
//	c1.vai();

	maiormenor m1;
//	m1.mm();

	moda mo1;
//	mo1.mod();

	cout<<"Qual tipo de busca pretende fazer?"<<endl<<"a) Busca em tabela sem parada"<<endl<<"b) Busca em tabela com parada"<<endl<<"c) Busca do maior e menor elementos, utilizando o metodo BubbleSort"<<endl<<"d) Busca da moda, utilizando o metodo BubbleSort"<<endl;
	cin>>oq;

	if((oq=='A')||(oq=='a')){
		c1.vai();
	}
	
	if((oq=='B')||(oq=='b')){
		p1.para();
	}
	
	if((oq=='C')||(oq=='c')){
		m1.mm();
	}

	if((oq=='D')||(oq=='d')){
		mo1.mod();
	}

}


