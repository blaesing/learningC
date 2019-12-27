#include <stdio.h>

int main(){
	int cel;

	for (cel=0; cel<=300; cel=cel+20){
		printf("%3d\t%3.1f\n",cel,(9.0/5.0)*cel+32);;
	}
}
