#include <stdio.h>

int main(){
	int ln = 0;
	int wc = 0;
	int c;
	while ((c = getchar())!=EOF){
		if (c == '\n'){
			++ln;
		}
		++wc;
	}
	printf("%d characters written\n",wc);
	printf("%d lines written",ln);
}

