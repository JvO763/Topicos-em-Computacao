
#include <iostream>

using namespace std;

class Soma{
    private:
    float i, x, res;
    public:
    float Souma(void){
        res=0;
        for(i=1;i<=50;i++){
            res=res+((i*2)-1)/i;
        }
        cout<<res;
    };
};

int main(){
	Soma s;
	s.Souma();


}
