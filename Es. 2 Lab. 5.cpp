#include <stdio.h>
#define N 10

int v[N]={};
int main(){
	printf("Inserisci %d valori interi\n", N);
	for(int i=0; i<N; i++){
		scanf("%d", &v[i]);	
	}
		for(int i=0; i<N; i++){
		printf("%d", v[i]);	
	}
	int somma=0;
		for(int i=0; i<N; i++){
		somma=somma+v[i];	
	}
	float media= (float) somma/(float) N;
	printf("\n %f\n", media);
	int max= v[0];	
		for(int i=0; i<N; i++){
		if(max<v[i])
		max=v[i];
	}
	printf("%d\n ", max);
}
