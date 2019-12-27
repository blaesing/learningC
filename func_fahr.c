#include <stdio.h>

int fahr_cel(float start,float stop,float step){
	float cel;

	printf("F\tC\n");
	while (start <= stop){
		cel = 5 * (start - 32) / 9;
		printf("%3.0f\t%6.1f\n",start,cel);
		start = start + step;
	}
	return 0;
}

int cel_fahr(float start, float stop, float step){
	float fahr;

	printf("C\tF\n");
	while (start<=stop){
		fahr = 9 * start / 5 + 32;
		printf("%3.0f\t%6.1f\n",start,fahr);
		start = start + step;
	}
	return 0;
}

int main(){
	fahr_cel(0,400,20);
	printf("\n");
	cel_fahr(0,300,10);
	return 0;
}
