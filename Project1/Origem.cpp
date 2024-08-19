#include <iomanip>
#include <iostream>

using namespace std;

class regression {
private:


public:
	float funcao(void) {
		int n;
		int i;
		cout << "Insira o numero de pontos: ";
		cin >> n;
		float x[n], y[n], sumx, sumy;
		for (i = 0; i <= n - 1; i++) {
			cout << "Insira o X" << i + 1 << ": ";
			cin >> x[i];
			cout << "Insira o Y" << i + 1 << ": ";
			cin >> y[i];
		}

		for (i = 0; i <= n - 1; i++) {
			cout << x[i];
			cout << y[i];
		}

		float somax(void) {
			sumx = 0;
			for (i = 0; i < 2; i++) {
				sumx = sumx + x[i];
				cout << sumx;

			}
		}

	}

};

int main() {
	int teste;
	regression r1;

	r1.funcao();



}