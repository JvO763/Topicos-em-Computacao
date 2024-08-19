#include <iostream>
#include <iomanip>
using namespace std;

//Quando se trata de funções existem duas formas de passar os parâmetros(argumentos) para a realização das ações dessa função, a passagem de argumentos por valores e a por referência.
//A passagem por valor consiste em associar outra parte da memoria com um valor igual ao do argumento da função principal, de forma que esse argumento é apenas copiado para outra parte da memória e sua cópia é utilizada lá.
//Já a passagem por referência consiste em associar outra parte da memória com um ponteiro apontado para a memória do argumento da função principal, ou seja, tudo que for feito com o argumento na função(não principal),
//influencia no valor do argumento na função principal.
//Logo, a principal diferença prática entre os modos de passagem é que um pode alterar o valor do argumento da função principal na execução das funções secundárias(passagem por referência) e o outro não, além disso, 
//a passagem por referência permite o retorno de mais de 1 valor, diferente do que ocorre com a passagem por valor. Como mostra o exemplo:
int funcao1(int x, int y){
	int z;
	x=x+1;
	y=y+1;
	cout<<"\nx dentro da funcao 1 vale: " << x << " e y: "<< y;
	z=x+y;
	return(z);
}

int funcao2(int& x, int& y, int& z, int& h){
	x=x+1;
	y=y+1;
	cout<<"\nx dentro da funcao 2 vale: " << x << " e y: "<< y;
	z=x+y;
	h=x+1;
	return(z);
	
	
}

int main(){
	int a, b, c, d;
cout<<"Explicacao nos comentarios deixados acima dos codigos\n";
	cout<<"Insira o valor de x: ";
	cin>> a;
	cout<<"Insira o valor de y: ";
	cin>> b;
	c=funcao1(a, b);
	cout<<"\nx dentro da funcao principal apos a funcao 1 vale: " << a << " e y: "<< b;
	cout<<"\nalem disso, foi retornado o valor "<< c <<",para a funcao x+y";
	funcao2(a, b, c, d);
	cout<<"\nx dentro da funcao principal apos a funcao 2 vale: " << a << " e y: "<< b;
	cout<<"\nalem disso, foi retornado o valor "<< c <<",para a funcao x+y, mas tambem eh possivel retornar outro valor como x+1: "<< d ;
	
	
	
}
