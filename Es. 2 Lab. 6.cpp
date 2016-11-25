#include <stdio.h>
#define N 5

int v1[N]={12, 3, 12, 29, 13};
int v2[N]={12, 3, 12, 29, 13};
int flag[2*N]={0};
int check=0;

int main(){

	for(int i=0; i<N; i++){
		for(int f=0; f<N; f++){
			if(v1[i]==v1[f]){
				flag[i]++;
			}
		}
	}
	
	for(int i=0; i<N; i++){
		check=0;
	for(int f=0; f<N; f++){
		if(v1[i]==v2[f]){
			check++;
		if(check==flag[i]){
			flag[i+N]=1;
		}
		else{
			flag[i+N]=0;
		}
	}
}

}
	
for(int i=0; i<N; i++){
		
	if(flag[i+N]==1){
		if(i==N-1)
		printf("Sono uguali!");
	}
	else{
		printf("Sono diversi!");
		break;
	}
}
}
