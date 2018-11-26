
#include <stdio.h>

int main (){
	int T=0,
		i=0,
		j=0,
		k=0;
		
	scanf("%d",&T);
	
	int A[T],
		B[T],
		N[T],
		M[T],
		tot[T],
		sum[T];
		
	for (i=0;i<T;i++){
			sum[i]=0;
			scanf("%d",&A[i]);
			scanf("%d",&B[i]);
			scanf("%d",&N[i]);
			scanf("%d",&M[i]);
			
			int Temp[B[i]-A[i]];
			Temp[i]=A[i];
			for(j=A[i];j<B[i]-1;j++){
				
				Temp[i]++;
				
				if((Temp[i]%N[i]==0&&Temp[i]%M[i]!=0)){
					sum[i]=sum[i]+Temp[i];
				
				}
			}
			
			
				
		
		//tot[i]=tot[i]+sum;
	}
	
	for (i=0;i<T;i++){
	printf("%d\n",sum[i]);
	}
	
	
	
	return 0;
}