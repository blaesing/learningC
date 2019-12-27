#include <stdio.h>

int main(){
	float cel, fahr;
	float lower, upper, step;

	lower  = 0;
	upper = 300;
	step = 10;

	cel = lower;

	while (cel <= upper){
		fahr = 9 * cel/ 5 + 32;
		printf("%6.1f\t%3.0f\n",cel,fahr);
		cel  = cel + step;
	}
}
