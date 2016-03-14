#include <stdio.h>



int reverse(int n){

	int reversee = 0;

	while(n != 0){
		reversee = reversee*10;
		reversee = reversee+n%10;
		n = n/10;
	}
	return reversee;

}

int isParlin(int num){

	int revNum = reverse(num);

//	printf("%i\n", revNum );
//	printf("%d\n", num);

	if(revNum == num){
		return 1;
	}
	return 0;

}



int main(){


	int largest = 0;
	int num1 = 999;
	int num2 = 999;
	for(int i = 999; i > 0; i--){
		for(int j = 999; j > 0; j--){
			if(isParlin(i*j)){
				if (i*j > largest){
					largest = i*j;
					printf("%i\n", largest );
				}
				
			}			
		}		
	}
	return(0);
}