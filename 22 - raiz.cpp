

#include <iostream>
#include <iomanip>

using namespace std;

class funcao{
private:
	float num;
	int vez;
public:
	float raiz(float y, int n){
		float res;
		int i;
		num = y;
		vez = n;
		if (n == 1) {
			res = y / 2;
		//	cout<<"2";
		}
		else if (n == 0) {
		//	cout<<"3";
			res = 0;
		}
		else {
			res = 0;
		//	cout<<"4";
			for (i=1;i<=n;i++) {
				if (i == 1) {
					res = ((res * res) + y) / (2 * (i));
			//		cout<<"2";
					//cout<<res<<endl;
				}
				else {
					res = ((res * res) + y) / (2 * res);
			//		cout<<"1";
				}
			//	cout<<"1";

			}

		}
		cout << res;

	}



};

int main(){
	int conta;
	float value;

	funcao f1;
	cout << "Insira o valor que quer colocar na raiz: ";
	cin >> value;
	cout << "\ne a precisão: ";
	cin >> conta;

	f1.raiz(value, conta);



}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

