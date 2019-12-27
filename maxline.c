#include <stdio.h>
#define MAXLINE 1000 //maximum line length
#define NELEMS(x) (sizeof(x)/sizeof(x[0]))

//store the longest line and output it

int getline(char s[],int lim){
	int c,i;

	while((c=getchar()!=EOF
}

int copy(char s[]){
	int cl=0; // cl = current length
	
	size_t size = NELEMS(s);
}
