/* Ol�, professor
este � nosso c�digo.

Alberto Ribeiro Justino - 12550299
Breno Villa Luchezi - 12549582
Carlos Demoliner Kubota - 12549658
Eric Luis Souza dos Santos - 12550257
Jo�o Vitor de Oliveira - 12611734
Leonardo Miguel do Nascimento Greghi - 12550111

*/

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <fstream>

using namespace std;

class compact {
private:
	// 'n' � o contador que representa o tamanho do vetor de 16 elementos
	int n = 16;
	// ponteiro para o vetor 'bi[i]' (que armazenar� os valores em bin�rio)
	int* bi;
	// vetor que armazena os valores j� compactados
	char c[4];
	
public:

	// Fun��o destinada a compactar os valores 
	void Compactar() {
		setlocale(LC_ALL, "portuguese");
		// 'i' - incrementa
		int i=0;
		char bi[16];
		// arquivoE - arquivo entrada: recebe o  arquivo com dados em bin�rio
		ifstream arquivoE;
		// arquivoS - arquivo sa�da: cria o arquivo comprimido que poder� ser ou n�o usado futuramente para descompactar
		ofstream arquivoS;
		
		cout << endl << endl << "Voc� deseja compactar, ent�o vamos l�!" << endl;
		// Abre o arquivo chamado binario
		arquivoE.open("binario.txt");
		if(arquivoE.is_open()){
			// O arquivo com os dados comprimidos � gerado aqui. Se e somente se o arquivo 'binario.txt' existir
			arquivoS.open("arquivao.txt");
			
			// Enquanto houverem dados no arquivo, o vetor 'bi' os receber� (desde que n�o excedam as 16 unidades)
			while(arquivoE.get(bi[i])){
				i++;
			}
		}

		// Este 'for' � o respons�vel por ler o vetor 'bi' e transp�-lo compactado no vetor 'c'
		for (i = 0; i < 4; i++) {
			/* Os 'if' percorrem 4 elementos do vetor e checam 16 possibilidades de occorr�ncia dos 0 e 1,
			cada uma destas possibilidades representam uma letra mai�scula de A a P que formar�o o vetor 'c[i]'.
			A sequ�ncia de 4 letras variando de A a P ser� nosso vetor compactado. */
			
			if (bi[4 * i] == '0' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '0') {
				c[i] = 'A';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '1') {
				c[i] = 'B';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '0') {
				c[i] = 'C';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '1') {
				c[i] = 'D';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '0') {
				c[i] = 'E';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '1') {
				c[i] = 'F';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '0') {
				c[i] = 'G';
			}
			else if (bi[4 * i] == '0' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '1') {
				c[i] = 'H';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '0') {
				c[i] = 'I';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '1') {
				c[i] = 'J';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '0') {
				c[i] = 'K';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '0' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '1') {
				c[i] = 'L';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '0') {
				c[i] = 'M';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '0' && bi[4 * i + 3] == '1') {
				c[i] = 'N';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '0') {
				c[i] = 'O';
			}
			else if (bi[4 * i] == '1' && bi[4 * i + 1] == '1' && bi[4 * i + 2] == '1' && bi[4 * i + 3] == '1') {
				c[i] = 'P';
			}
		}
		
		// Retorno do vetor comprimido
		cout << "\nAp�s a compress�o, seu vetor �:" << endl;
		for (i = 0; i < 4; i++) {
			cout << c[i];
			arquivoS << c[i];
		}
		
		// Retorno do bin�rio original
		cout << "\n\nAntes da compress�o seu vetor era:\n";
		for (i = 0; i < n; i++) {
			// Este if insere espa�os de sequ�ncia em sequ�ncia para melhor visualiza��o do usu�rio
			if (i % 4 == 0 && i != 0) {
				cout << " ";
			}
			cout << bi[i];
		};
			
		// Fecha o arquivoE (lido) e o arquivoS (criado)
		arquivoE.close();
		arquivoS.close();
		
	}

	// Fun��o destinada a descompactar os vetores
	void Desontador() {
		setlocale(LC_ALL, "portuguese");
		int i = 0;
		// arquivoEcomp - arquivo entrada comprimido: recebe o  arquivo com dados comprimidos
		ifstream arquivoEcomp;
		// linha receber� o conte�do dos arquivos
		char linha;
		
		// Novamente, � alocada mem�ria para o vetor 'bi' de magnitude 'n'
		// Neste caso, 'bi' n�o recebe seu conte�do pelo usu�rio, mas sim pelo pr�prio programa
		bi = (int*)calloc(n, sizeof(int));
		
		cout << endl << endl << "\nVoc� deseja descompactar, ent�o vamos l�!";
		// O arquivo gerado na fun��o anterior (arquivao.txt) � aberto agora para ser descompactado
		arquivoEcomp.open("arquivao.txt");
		if(arquivoEcomp.is_open()){
			// Neste caso, como a vari�vel linha recebe os valores do arquivo caractere por caractere, os dados n�o precisam ser passados em forma de vetor
			while(arquivoEcomp.get(linha)){
			
				if (linha == 'A') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'B') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'C') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'D') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'E') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'F') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'G') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'H') {
					bi[4 * i] = 0;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'I') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'J') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'K') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'L') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 0;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'M') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'N') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 0;
					bi[4 * i + 3] = 1;
				}
				else if (linha == 'O') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 0;
				}
				else if (linha == 'P') {
					bi[4 * i] = 1;
					bi[4 * i + 1] = 1;
					bi[4 * i + 2] = 1;
					bi[4 * i + 3] = 1;
				}
				i++;
			}
		}
		
		// Caso ocorra algum problema em abrir o arquivo, a seguinte caixa de di�logo surgir�:
		else{
			cout << "\n\nFALHA: N�o foi poss�vel abrir o arquivo" << endl;
		}
		
		// Fechamento do arquivo compactado
		arquivoEcomp.close();
		
		// retorno dos dados inseridos e gerados para o usu�rio 
		cout << "\nAntes a descompress�o, seu vetor era:" << endl;
		arquivoEcomp.open("arquivao.txt");
		while(arquivoEcomp.get(linha)){
			cout << linha;
		}
		cout << "\n\nAp�s da descompress�o, seu vetor �:\n";

		for (i = 0; i < n; i++) {
			if (i % 4 == 0 && i != 0) {
				cout << " ";
			}
			cout << bi[i];
		}
		
	
		
	}
	
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	compact A;
	// aux1 - escolha entre compactar ou n�o
	// aux2 - escolha entre descompactar ou n�o
	// dicio - escolha entre ver o dicion�rio do compactador ou n�o
	int aux1, aux2, dicio;

	cout << "Bem-vindo ao Kompresse!" << endl << "\nclique em 1 para compactar e em qualquer tecla caso n�o queira \nIMPORTANTE: salve seu arquivo em bin�rio com 16 caracteres, sem espa�os e com o nome 'binario.txt': \n";
	cin >> aux1;
	
	// Chama a fun��o que vai compactar o vetor em bin�rio
	if (aux1 == 1) {
		A.Compactar();
	}
	
	else {
		cout << "\nEnt�o est� tudo certo! \nAt� a pr�xima :)\n";
		return 0;
	}
	
	cout << "\n\n\nDeseja descompactar o arquivo? tecle 1 caso sim e qualquer tecla caso n�o: ";
	cin >> aux2;
	// Chama a fun��o que vai descompactar o vetor em bin�rio
	if (aux2 == 1) {
		A.Desontador();
	}
	// Valor inserido para 'aux2' diferente de 1
	else {
		cout << "\nEnt�o est� tudo certo! \nAt� a pr�xima :)\n";
	}
	
	// Op��o do usu�rio ver como a compacta��o ocorre
	cout << "\n\nTarefa realizada com sucesso! \n\nCaso queira visualizar nosso dicionario digite 1, caso queira sair digite 0: ";
	cin >> dicio;
	if (dicio == 1) {
		cout << endl;
		cout << "\nO vetor do binario de 16 digitos � dividido em 4 vetores de 4 digitos.\nUma letra � associada a cada 4 digitos e o dicionario � criado a partir disso.\n\n";
		cout << "[0][0][0][0] = A			[0][0][0][1] = B" << endl << endl << "[0][0][1][0] = C			[0][0][1][1] = D" << endl << endl << "[0][1][0][0] = E			[0][1][0][1] = F" << endl << endl << "[0][1][1][0] = G			[0][1][1][1] = H" << endl << endl << "[1][0][0][0] = I			[1][0][0][1] = J" << endl << endl << "[1][0][1][0] = K			[1][0][1][1] = L" << endl << endl << "[1][1][0][0] = M			[1][1][0][1] = N" << endl << endl << "[1][1][1][0] = O			[1][1][1][1] = P";
		cout << endl << endl << "At� mais! ";

	}
	else if (dicio == 0) {
		cout << "At� mais!";
	}
	// Vari�vel 'dicio' recebe um valor diferente de 0 ou 1
	else {
		cout << "ERRO: op��o inv�lida";
	}


	return (0);
}
