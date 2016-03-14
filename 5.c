#include <stdio.h>

int main(){
	
	int num = 0;

	while(1){

		num +=20;

		int success = 1;

		for (int i = 1; i < 21; ++i)
		{
			if(num%i != 0){
				success = 0;

				i = 21;
			}
		}

		if(success){
			printf("%i\n", num);
			return(0);
		}
	}

}