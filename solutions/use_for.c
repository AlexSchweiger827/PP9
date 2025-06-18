#include <stdio.h>
#include <stdlib.h>

void count_up(int n){
	for (int i = 0; i <= n; i++){
		printf("i = %d\n", i);
	}


}

int main(){
	count_up(10);
	return 0;
}
