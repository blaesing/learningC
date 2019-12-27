#include <stdio.h>

// if more than x spaces, make it a tab

int entab(int thresh){
	// thresh being however many -> tab
	
	int c,i,nc,sc; //sc = space counter

	while ((c=getchar())!=EOF){
		++nc;
		if (c!='\t'){
			putchar(c);
		}
		else if (c==' '){
			++sc;
			if (sc>=thresh){
				printf("%c",'\t');
			}
			else{
				;
			}
		}
		sc = 0;
	}
	return 0;
}


int main(){
	entab(4);
	return 0;
}
