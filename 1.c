#include <stdio.h>
int main(){
	
	int sum = 0;
	int i = 0;
	for(i; i < 1000; i++){
		if((i%3 == 0) || (i%5 == 0)){
			printf("%i \n", sum);
			sum += i;
		}
	}

	printf("Sum: %i\n", sum);

	return(0);
}