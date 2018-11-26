//https://pandaoj.com/problem/REVERSAL

#include <stdio.h>

int main (){
	int i=0,
		N=0;
	
	scanf("%d",&N);
	int Y[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&Y[i]);
	}
	
	for(i=N-1;i>=0;i--){
		printf("%d ",Y[i]);
	}
	
	
	return 0;
}