#include <stdio.h>

int sp = 4; //number of spaces from tab

int main(){
	int c,i,nc,nw;

	while ((c=getchar())!=EOF){
		if (c!='\t'){
			putchar(c);
		}
		else if (c=='\t'){
			for (i=0;i<sp;++i){
				printf("%c",' ');
			}
		}
	}
	return 0;
}
