#include <iostream>

using namespace std;
int main(){

    int i, b, c, j;
    int vetA[5]={1, 2, 3, 4, 5}, vetB[5]={10, 9, 8, 7, 6}, vetC[10];
i=0;
j=0;
for(i=0;i<10;){
	vetC[j]=vetA[i];
	vetC[j+1]=vetB[i];
	i=i+1;
	j=i*2;
	
	
}

for(i=0;i<10;i++){
cout<<vetC[i]<<endl;

}

}


