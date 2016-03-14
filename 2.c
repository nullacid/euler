#include <stdio.h>

int main(){
	

	int prev = 1;
	int newPrev = 1;

	int fib = 1;
	int fibSum = 0;

	while(fib < 4000000){

		newPrev = fib;
		fib += prev;
		prev = newPrev;

		if(fib % 2 == 0){
			fibSum += fib;
		}

		printf("%i\n", fibSum);

	}
}