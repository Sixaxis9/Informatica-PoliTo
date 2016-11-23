#include <stdio.h>
#define N 5

int v1[N]={};
int v2[N]={};

int main(){
	for(int i=0; i<N; i++){
		scanf("%d", &v1[i]);
	}
	for(int i=0; i<N/2; i++){
		if(v1[i]!=v1[N-i-1])
		{
		printf("I numeri non sono palindromi\n");
		break;
		}
		else{
			if(i==N/2-1){
		printf("i numeri sono palindromi\n");
		continue;}
	}
	}
}
