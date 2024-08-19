#include <iostream>
using namespace std;

int main(){
    int bts[5][5];
    
    int i, res, a, j;

    res=0;
    a=1;
    for(i=0;i<5;i++){
    	
       for(j=0;j<5;j++){
       	cout<<"Insira valores pra matrix 5x5 Mat["<<i<<"]["<<j<<"] : ";
       	cin>>bts[i][j];
	   }
    }
    
    cout<<"Sua matriz eh: "<<endl;
    for(i=0;i<5;i++){
    	
       for(j=0;j<5;j++){
       	cout<<bts[i][j]<<" ";
       	}
       	cout<<endl;
    }
 
 	for(i=0;i<5;i++){
 		for(j=0;j<5;j++){
			if(bts[i][j]<128){
				bts[i][j]=0;
			}
			else{
				bts[i][j]=1;
			}
		}
	}
	
	cout<<"Sua matriz eh: "<<endl;
    for(i=0;i<5;i++){
    	
       for(j=0;j<5;j++){
       	cout<<bts[i][j]<<" ";
       	}
       	cout<<endl;
    }
 	
}
