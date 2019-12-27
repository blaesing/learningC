#include <stdio.h>
#include <ctype.h>


int htoi(char s[]){
	// convert a string of hex into ints
	size_t size = sizeof(s)/sizeof(s[0]);
	int i;
	//printf("%zd",size);
	for(i=0;i<size;++i){
		printf("%c\n",s[i]);
	}
	return 0;
}

int main(){
	char hex[] = "0xb";
	htoi(hex);
	return 0;
}
