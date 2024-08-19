#include <iostream>

using namespace std;
int main(){

    int i, b, c;
    int vetA[5]={7, 2, 5, 4, 3};
i=0;
b=vetA[0];
for(i=0;i<5;i++){
	if(b<=vetA[i]){
		b=vetA[i];
	}	
}

c=vetA[0];

for(i=0;i<5;i++){
	if(c>=vetA[i]){
		c=vetA[i];
	}
}

cout<<b<<" eh o maior numero dessa sequencia (1,2,5,4,3) e o menor eh "<<c;

}


