#include <stdio.h>

// make a histogram of the lengths of the words
// in the input

// todo fix the new line thing
int main(){
	int c,i,nc,nw,tc;

	nw=nc=0;

	while ((c = getchar())!=EOF){
		++nc;
		++tc;
		for(i=0;i<nc;++i){
			if(c!='\n'&&c!=' '&&c!='\t'){
				printf("×");
			}
			else{
				printf("\n");
				++nw;
			}
			nc=0;
		}
	}
	printf("%d characters written\n",tc);
	printf("%d words  written",nw);
}
