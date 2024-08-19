#include <iostream>

using namespace std;

class Soma{
    private:
    float x, res, j, a, k, h;
    int i;
    public:
    float Souma(void){
        res=0;
        for(i=1;i<=50;){
        	a=1;
        	a=i*i*i;
			
            res=-res+1/a;
            
            i=i+2;
        }
        if(i%2==0){
        	res=-res;
		}
        res=32*res;
       // cout<<res;
        for(h=1;h>0;h++){
        	if(k*k*k>=res){
        		h=-1;
        //		cout<<"terminei";
			}
			else{
				k=k+0.0001;
				
			}
		//	cout<<k<<endl;
		}
		
		
    };
    
    float Resul(void){
    	return k;
	}
};

int main(){
	float hehe;
	Soma s;
	s.Souma();
	hehe = s.Resul();
	cout<<"Pi eh igual a "<<hehe;

}
