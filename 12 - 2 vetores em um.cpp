#include <iostream>

using namespace std;
int main(){

    int i;
    int vetA[5], vetB[10], vetC[15];
i=0;
for(i=0;i<5;i++){
cout<<"Insira o "<<i+1<<"º numero do vetor A: ";
cin>>vetA[i];
}
i=0;
for(i=0;i<10;i++){
cout<<"Insira o "<<i+1<<"º numero do vetor B: ";
cin>>vetB[i];
}

for(i=0;i<15;i++){

if(i<5){
    vetC[i]=vetA[i];
}
else{
    vetC[i]=vetB[i-5];

}
}

for(i=0;i<15;i++){
cout<<vetC[i]<<endl;

}

}
