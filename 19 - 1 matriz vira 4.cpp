#include <iostream>
using namespace std;

int main(){
    int bts[8][8], a[4][4], b[4][4], c[4][4], d[4][4];
    
    int i, res, j;

    res=0;
   
    for(i=0;i<8;i++){
    	
       for(j=0;j<8;j++){
       	cout<<"Insira valores pra matrix 8x8 Mat["<<i<<"]["<<j<<"] : ";
       	cin>>bts[i][j];
	   }
    }
    
    cout<<"Sua matriz eh: "<<endl;
    for(i=0;i<8;i++){
    	
       for(j=0;j<8;j++){
       	cout<<bts[i][j]<<" ";
       	}
       	cout<<endl;
    }
 
 	for(i=0;i<8;i++){
 		for(j=0;j<8;j++){
			if((i<=3)&&(j<=3)){
				a[i][j]=bts[i][j];
				
			}
			else if((i<=3)&&(j>3)){
				b[i][j-4]=bts[i][j];
			}
			else if((i>3)&&(j<=3)){
				c[i-4][j]=bts[i][j];
			}
			else if((i>3)&&(j>3)){
				d[i-4][j-4]=bts[i][j];
			}
		}
	}
	
	cout<<"Sua matriz A eh: "<<endl;
    for(i=0;i<4;i++){
    	
       for(j=0;j<4;j++){
       	cout<<a[i][j]<<" ";
       	}
       	cout<<endl;
    }
    
    cout<<"Sua matriz B eh: "<<endl;
    for(i=0;i<4;i++){
    	
       for(j=0;j<4;j++){
       	cout<<b[i][j]<<" ";
       	}
       	cout<<endl;
    }
    
    cout<<"Sua matriz C eh: "<<endl;
    for(i=0;i<4;i++){
    	
       for(j=0;j<4;j++){
       	cout<<c[i][j]<<" ";
       	}
       	cout<<endl;
    }
    
    cout<<"Sua matriz D eh: "<<endl;
    for(i=0;i<4;i++){
    	
       for(j=0;j<4;j++){
       	cout<<d[i][j]<<" ";
       	}
       	cout<<endl;
    }
 	
}
