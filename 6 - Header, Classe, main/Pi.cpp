#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

class Funcaozinha{
	private:
		float x, y;
	public:
		float calculatePi(void){
			x=0;
			y=1;
			for(y;y<=50;y++){
				x=(x+(((y*2)-1)/y));
	//			cout<<(((y*2)-1)/y)<<" "<<y<<endl;
			};
			x=x*32;
	//		cout<<x<<" "<<y<<endl;
//		x=pow(x, 1.0/3.0);
	//	cout<<x;
		};
		
		float returnPi(void){
			return x;
		};
	
};

int main(void){
	float j;
	Funcaozinha f1;
	f1.calculatePi();
	j=f1.returnPi();
	cout<<"pi = "<<j;
	
}
