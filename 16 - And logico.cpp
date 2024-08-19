#include <iostream>
using namespace std;

int main(){
    int bts[5];
    int bts2[5];
    int bts3[5]={0, 0, 0, 0, 0};
    int i, res, a, j;

	cout<<"insira os valores de cada bit do vetor A\n";
    for(i=0;i<5;i++){
    	cout<<i+1<<": ";
    	cin>>bts[i];
	}
	
	cout<<"insira os valores de cada bit do vetor B\n";
    for(i=0;i<5;i++){
    	cout<<i+1<<": ";
    	cin>>bts2[i];
	}
	
    res=0;
    a=1;
    for(i=0;i<5;i++){
    	
       if((bts[i]==1)&&(bts2[i]==1)){
       	bts3[i]=1;
	   } 
         


 }
 for(i=0;i<5;i++){
 cout<<bts3[i]<<endl;
}
}
