#include <iostream>


using namespace std;

class Senin{
	private:
		float x, z, i, j, a, b;
		int y;
	public:
		void senX(float _x, int _y){
			
            x=_x;
            y=_y;
            
            for(i=1;i<=y;i++){
                
                a=1;
                for(j=1;j<=((i*2)-1);j++){
                    a=a*x;

                }

                b=1;
                for(j=1;j<=((i*2)-1);j++){
                    b=b*j;

                }
                z=-z+(a/b);
            
            }

            if(y%2==0){
                z=-z;
            }
            
            if(z==-0){
            	z=0;
			}
        }
		
		float getSenX(void){
            return z;

        }

};

int main(void){
	int u;
	float o;
	Senin v1;
	cout<<"Insira o valor de x, em radianos, na equacao sen(x): ";
	cin>>o;
	cout<<"Insira o valor de y que sera o numero da precisao: ";
	cin>>u;
	v1.senX(o , u);
	v1.getSenX();
	cout<<"Sen("<<o<<") eh igual a "<<v1.getSenX();
	
}
