#include <iostream>

using namespace std;

class CalcPi{
    private:
        float x, y, i, a, j, z, g, hehe;
    public:
        void piFinder(float _x){
            x=_x;

			a=1;
            for(i=1;a>=0.0001;){
                
                a=1/(i*i*i);
               
                j=i;
                i=i+2;
            }
          	
          	
          	y=0;
          	a=1;
           	for(i=1;i<=j;){
          		
          		
                a=1/(i*i*i);      
            //	cout<<"a: "<<a<<endl;
            	
          		y=-y+a;
          		i=i+2;
          		
			  }
			  y=-y;
			//cout<<y<<endl;
			
			y=y*32;
			//cout<<y;
			
			for(i=0;i*i*i<=y;){
				i=i+0.0001;
				cout<<i<<endl;
				g=i;
			}
			
			z=g*x*x;
			cout<<"A �rea do nosso c�rculo � :"<<z;
        }
};

int main(){
	float r;
	cout<<"Vamos calcular a �rea de um c�rculo, insira o raio do c�rculo: ";
	cin>>r;
	CalcPi p1;
	p1.piFinder(r);
	
	
}




