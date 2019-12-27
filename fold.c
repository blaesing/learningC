#include <stdio.h>

int lim = 10;

int main(){
	int i,c,nc;

	nc=0;
	// input a string
	for(i=0;(c=getchar()!=EOF)&&i<lim;++i){
		++nc;
		putchar(c);
	}
}

