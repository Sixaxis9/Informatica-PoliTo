#include <stdio.h>
#define N 5

int v1[N]={12, 3, 12, 13, 29};
int v2[N]={12, 29, 13, 3, 12};
int flag[N]={0};
int flag1[N]={0};
int flag2[N]={0};

int main(){
	
	for(int i=0; i<N; i++){
		flag[i]=0;
		flag1[i]=0;
	}

	for(int i=0; i<N; i++){
		for(int f=0; f<N; f++){
			if(v1[i]==v2[f]){
				flag2[i]=1;
			}
			
		}
	}
	
	for(int i=0; i<N; i++){
		for(int f=0; f<N; f++){
			if(v1[i]==v1[f]){
				flag[i]=flag[i]+1;
			}
			
		}
	}	
	
	for(int i=0; i<N; i++){
		for(int f=0; f<N; f++){
			if(v2[i]==v2[f]){
				flag1[i]=flag1[i]+1;
			}
			
		}
	}	

for(int i=0; i<N; i++){
	for(int h=0; h<N; h++){
	
	
	if(flag[i]==flag1[h){
			for(int f=0; f<N; f++){
	
	if(flag2[i]==1){
		for(int n=0; n<N; n++){	
		if(flag[i]==flag1[f]){
				if(i==N-1){
				printf("BBuuoomomooooo");
				}
	}
		}
	}
	else{
		printf("azzz non è bbbbuonoooo");
		break;
	}
}
}


		
	}}
	}
	
	
	
	// insierire prima controllo degli elementi. Se sono uguali, allora controllare il numero dei vari parametri.
