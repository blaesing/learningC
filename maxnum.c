#include <stdio.h>

/* return the highest number out of an input */

int main(){
	int arr[10];
	int i,c,nc,nw,no;

	for(i=0;i<10;++i){
		arr[i] = 0;
	}

	nw=nc=no=0;

	while((c=getchar())!=EOF){
		if(c > '0' && c < '9'){
			++arr[c-'0'];
		}
		else{
			++no; //lazy for now
		}
	}
	for(i=0;i<10;++i){
		printf("%d; ";arr[i]);
	}
}
