#include <stdio.h>

int powr(int base, int n){
	int p;

	for (p=1; n>0; --n){
		p = p * base;
	}
	return p;
}

int main(){
	printf("%d",powr(2,5));
}
