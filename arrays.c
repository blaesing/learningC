#include <stdio.h>

int main(){
	// count all words whitespaces and numbers
	int c,i,nwhite, nother;
	int arr[10];

	nwhite = nother = 0;
	for(i = 0; i<10; ++i){
		arr[i] = 0;
	}
	while ((c=getchar()) != EOF){
		if (c > '0' && c < '9'){
			++arr[c - '0'];
		}
		else if (c == '\n' || c=='\t'||c==' '){
			++nwhite;
		}
		else{
			++nother;
		}
	}
	for (i=0; i<10; ++i){
		printf("%d, ",arr[i]);
	}
	printf("\n%d whitespace\n%d other",nwhite,nother);

}

