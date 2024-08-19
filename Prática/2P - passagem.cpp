#include <iostream>
#include <iomanip>
using namespace std;

//Quando se trata de fun��es existem duas formas de passar os par�metros(argumentos) para a realiza��o das a��es dessa fun��o, a passagem de argumentos por valores e a por refer�ncia.
//A passagem por valor consiste em associar outra parte da memoria com um valor igual ao do argumento da fun��o principal, de forma que esse argumento � apenas copiado para outra parte da mem�ria e sua c�pia � utilizada l�.
//J� a passagem por refer�ncia consiste em associar outra parte da mem�ria com um ponteiro apontado para a mem�ria do argumento da fun��o principal, ou seja, tudo que for feito com o argumento na fun��o(n�o principal),
//influencia no valor do argumento na fun��o principal.
//Logo, a principal diferen�a pr�tica entre os modos de passagem � que um pode alterar o valor do argumento da fun��o principal na execu��o das fun��es secund�rias(passagem por refer�ncia) e o outro n�o, al�m disso, 
//a passagem por refer�ncia permite o retorno de mais de 1 valor, diferente do que ocorre com a passagem por valor. Como mostra o exemplo:
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
