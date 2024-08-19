#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

class fatora{
	private:
		float x, y, h, res, z, m, w;
	int n;
	public:
		float getCos(float a, float b){
			x=a;
			y=b;
			m=1;
			z=1;
			h=1;
			n=0;
			res=1;
			if(y==1){
				res=1;
				cout<<res;
			}
			else{
			for(h=0;h<y;){
				for(w=2;w<=h;){
					z=z*x*x;
					cout<<"z = "<<z<<endl;
					cout<<"x = "<<x<<endl;
					m=m*w*(w-1);
					cout<<"w = "<<w<<endl;
					cout<<"m = "<<m<<endl;
					
					
					w=w+2;
				}
				n=(w-2)/2;
				if(n%2==0){
					res=res+(z/m);
					cout<<res;
					cout<<"par \n";
				}
				else{
					res=res-(z/m);
					cout<<res;
					cout<<"impar \n";
				};
				
				h=h+2;
				n=0;
				w=0;
				m=1;
				z=1;
			}
			
		};
		};
		
		float returnCos(void){
		return res;
		};
	
};

int main(void){
	float j, k, i;
	i=2;
	j=1;
	fatora f1;
	f1.getCos(3, 3);
	k=f1.returnCos();
	cout<<"cos("<<j<<") = "<<k;
	
}
