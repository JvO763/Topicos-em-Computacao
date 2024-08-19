#include <iostream>
using namespace std;

int main(){
    int bts[8];
    int i, res, a, j;
    
    cout<<"insira os valores de cada bit\n";
    for(i=0;i<8;i++){
    	cout<<i+1<<": ";
    	cin>>bts[i];
    	
    	
	}

    res=0;
    a=1;
    for(i=0;i<8;i++){
    	a=1;
        for(j=0;j<(7-i);j++){
            a=a*10;
      //    	cout<<a<<endl;

        }
        
        res=res+(bts[i]*a);
        
        


 }
 cout<<res;
}
