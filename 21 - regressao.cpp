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
		float x[n], y[n], sumx, sumy, sumxy, sumxx, a, b;
		for (i = 0; i <= n - 1; i++) {
			cout << "Insira o X" << i + 1 << ": ";
			cin >> x[i];
			cout << "Insira o Y" << i + 1 << ": ";
			cin >> y[i];
		}

	//	for (i = 0; i <= n - 1; i++) {
	//		cout << x[i];
	//		cout << y[i];
	//	}
		
		sumx = 0;
		for (i = 0; i < 2; i++) {
			sumx = sumx + x[i];
		//	cout << sumx;
		}
		
		sumy = 0;
		for (i = 0; i < 2; i++) {
			sumy = sumy + y[i];
		//	cout << sumy;
		}
		
		sumxy = 0;
		for (i = 0; i < 2; i++) {
			sumxy = sumxy + x[i]*y[i];
		//	cout << endl << sumxy;
		}
		
		sumxx = 0;
		for (i = 0; i < 2; i++) {
			sumxx = sumxx + x[i]*x[i];
		//	cout << sumx;
		}
		
		a=((n*sumxy) - (sumx*sumy))/((n*sumxx) - (sumx*sumx));
		b=((sumy*sumxx) - (sumx*sumxy))/((n*sumxx)-(sumx*sumx));
		
		cout<<"Esses pontos são gerados pela equação: Y = "<<a<<"X + ("<<b<<")";
		

	}

};

int main() {
	int teste;
	regression r1;

	r1.funcao();



}
