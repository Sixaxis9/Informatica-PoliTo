#include <stdio.h>

int main(){
	int num_1, num_2, max, min, mcd, resto=1;
	scanf("%d%d", &num_1, &num_2);
	max=num_1;
	min=num_2;

	if(num_1<num_2){
		max=num_2;
		min=num_1;
	}
resto = max%min;
	while(resto!=0){
		max=min;
		min=resto;
		resto=max%min;
	}
	
	printf("%d", min);

}
