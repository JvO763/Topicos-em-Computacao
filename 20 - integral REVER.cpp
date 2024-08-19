#include <iomanip>
#include <iostream>

using namespace std;

class integral{
	private:
		
	public:
		pi(void){
			float x1, x2, y1, y2, k, area, A, r;
			area=0;
			cout<<"Insira o raio do circulo: ";
			cin>>r;
			for(k=0;k<=1;){
				
				x1=k;
				x2=k+0.0001;
				y1=(1)/(1+x1*x1);
				y2=(1)/(1+x2*x2);
				area=area+((y1+y2)*(x2-x1)/2);
				
				
				k=k+0.0001;
				
			}
			//cout<<4*area;
			A=r*r*area*4;
			cout<<"A area do circulo eh de: "<<A<<", seu perimetro eh de: "<<2*area*4*r;
			
		}
};

int main(){
	integral i1;
	i1.pi();

}
