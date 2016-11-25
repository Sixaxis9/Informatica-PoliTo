#include <stdio.h>
#define N 5

int v1[N*4]={12, 3, 12, 29, 13, 		12, 3, 12, 29, 13};

int check=0;

int main(){

	for(int i=0; i<N; i++){
		for(int f=0; f<N; f++){
			if(v1[i]==v1[f]){
				v1[i+2*N]++;
			}
		}
	}
	
	for(int i=0; i<N; i++){
		check=0;
	for(int f=0; f<N; f++){
		if(v1[i]==v1[N+f]){
			check++;
		if(check==v1[i+2*N]){
			v1[i+3*N]=1;
		}
		else{
			v1[i+3*N]=0;
		}
	}
}

}
	
for(int i=0; i<N; i++){
		
	if(v1[i+3*N]==1){
		if(i==N-1)
		printf("Sono uguali!");
	}
	else{
		printf("Sono diversi!");
		break;
	}
}
}
