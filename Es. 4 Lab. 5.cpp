#include <stdio.h>
#define N 10

int v1[N]={};
int stampa_fino=0;

int main(){
	for(int i=0; i<N; i++){
		scanf("%d", &v1[i]);
		stampa_fino++;
		if(i>1 && v1[0]<v1[1] && v1[i]<v1[i-1]){
			stampa_fino--;
			break;			
		}
		if(i>1 && v1[0]>=v1[1] && v1[i]>v1[i-1]){
			stampa_fino--;
			break;			
		}
	}
	
	for(int i=0; i<stampa_fino; i++){
		printf("%d", v1[i]);
	}
	
}
