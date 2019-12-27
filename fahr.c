#include <stdio.h>

int main(){
	float fahr, cel;
	float upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("F\tC\n");
	while (fahr <= upper){
		cel = 5* (fahr-32) / 9;
		printf("%3.0f\t%6.2f\n",fahr,cel);
		fahr = fahr + step;
	}
}
