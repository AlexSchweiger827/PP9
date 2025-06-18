#include <stdio.h>
#include <stdlib.h>

const char* sign_of(int x){
	if ( x > 0){
		printf("%d > 0 (positive) \n", x);
	}
	
	if ( x == 0){
		printf("%d = 0 (zero)\n", x);
	}
	
	if ( x < 0){
		printf("%d < 0 (negative) \n", x);
	}	
}

int main(){
	sign_of(2);
	sign_of(0);
	sign_of(-1);
}

