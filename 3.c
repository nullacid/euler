#include <stdio.h>


int main(){
	
	long largestPrime = 0;
	long theNumber = 600851475143;
	int notDone = 1;
	int currNum = 1;

	while(currNum < theNumber){

		currNum++;
				printf("%i\n", theNumber );

		if(theNumber%currNum == 0){
			theNumber = theNumber/currNum;

		}

	}

	printf("%i\n",currNum);

}

