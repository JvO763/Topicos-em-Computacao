#include <iomanip>
#include <iostream>

using namespace std;

class integral {
private:


public:
	float funcao(void) {
		int n;
		int i;
		cout << "Insira o numero de pontos: ";
		cin >> n;
		float x[n], y[n], h, a, res;
		for (i = 0; i <= n - 1; i++) {
			cout << "Insira o X" << i + 1 << ": ";
			cin >> x[i];
			cout << "Insira o Y" << i + 1 << ": ";
			cin >> y[i];
		}
		
		
		h=(x[n-1] - x[n-2]) / n;
		a=h*(y[n-1]+y[n-2])/2;
		
		
		
		cout<<"Agora vai: "<<a*4<<endl<<h<<endl<<a;
		

	
		

	}

};

int main() {
	int teste;
	integral i1;

	i1.funcao();



}
