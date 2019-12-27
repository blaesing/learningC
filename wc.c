#include <stdio.h>
#define IN 0	//in a word
#define OUT 1	//outside word

int main(){
	/*count words lines and chars*/

	int c,nw,nl,nc,state;

	state = OUT;
	nw = nl = nc = 0;
	while((c=getchar())!=EOF){
		++nc;
		if (c== '\n'){
			++nl;
		}
		if (c == '\n'||c == '\t'||c==' '){
			state = OUT;
			++nw;
		}
		/*
		else{
			state = IN;
			putchar(c);
		}
		*/
	}
	printf("%d characters,\n%d words,\n%d lines",nc,nw,nl);
}

