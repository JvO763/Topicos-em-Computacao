#include <iostream>


using namespace std;

class Vetor2d{
	private:
		float x, z, i, j, g, a, b;
		int y;
	public:
		void cosX(float _x, int _y){
			y= _y;
            x=_x;
            z=0;
            i=1;
            a=1;
            b=1;

            if(y==1){
                z=1;
            }
            else{
                z=1;
            
                for(i=2;i<=(y);){
                   
                    j=i;
                    a=1;
                    
                    for(g=1;g<=((j-1)*2);g++){
                       a=x*a;
                   //    cout<<"a = "<<a;
                    //   cout<<"test";
                    }

                    b=1;
                    for(g=1;g<=((j-1)*2);g++){
                        b=b*g;
               //         cout<<"b = "<<b;
                        
                        
                    }

                   z=-z+(a/b);           //depois colocar um "se y%2==0, z=z, se nao, z=-z"
				//	cout<<"z = "<<z;
                    i=i+1;
                }

                if(y%2==0){
               		z=-z;
                }
                
                

            }
		}
		float getCosX(void){
            return z;

        }
        
        float getSenX(void){
            return (1-(z*z));

        }
        
        float getTgX(void){
            return ((1-(z*z))/(z));

        }
		
};

int main(void){
	int u;
	float o;
	Vetor2d v1;
	cout<<"Insira o valor de x, em radianos, na equacao cos(x): ";
	cin>>o;
	cout<<"Insira o valor de y que sera o numero da precisao: ";
	cin>>u;
	v1.cosX(o , u);
	v1.getCosX();
	v1.getSenX();
	v1.getTgX();
	cout<<"Cos("<<o<<") eh igual a "<<v1.getCosX()<<", o sen("<<o<<") eh igual a "<<v1.getSenX()<<" e a tg("<<o<<") eh igual a "<<v1.getTgX();
	
}
