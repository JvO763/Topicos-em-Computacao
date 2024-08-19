
#include <iostream>

using namespace std;

class Soma{
    private:
    float i, a, b, j;
    double res;
    public:
    float Souma(void){
        res=0;
        for(i=50;i>=1;i--){
        	
        	b=51-i;
        	a=1;
        	for(j=1;j<=b;j++){
        		a=2*a;
			}
        	
            res=res+(a/i);
         //   cout<<res<<" i = "<<i<<endl;
            
        }
        cout<<res;
    };
};

int main(){
	Soma s;
	s.Souma();


}
