#include <stdio.h>
#define N 10

int v1[N]={1, 2, 3, 4, 3, 2, 1, 2, 55, 89};
int esiste=0;
int count=0;
int posizio;

void stampa_valori();

int main(){
	for(int i=0; i<N; i++){
		if(i>0 && v1[i]>v1[i-1]){
			count++;
			posizio=i;
		}
		
	if(count==3){
		count=0;
		stampa_valori;
			for(int i=0; i<3; i++){
		printf("%d", v1[i+posizio-2]);	
	}
	}
	}
}

void stampa_valori(){
	for(int i=0; i<3; i++){
		printf("%d", v1[i+posizio-2]);	
	}
}
