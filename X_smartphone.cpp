//https://pandaoj.com/problem/INC2014A

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	 int a[10],b[10],c,d,n,sum[10]={0};
	 cin>>n;
	 for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 	for(int j=1;j<=a[i];j++){
	 		cin>>b[j];
	 		 sum[i]=sum[i]+b[j];
				
				}
				
		 }
		 	 for(int i=1;i<=n;i++){
		 	 	if(sum[i]<=16000){
	 		 	cout<<"case #"<<i<<" 16GB"<<endl;
				}else if(sum[i]>16000 && sum[i]<=32000){
					cout<<"case #"<<i<<" 32GB"<<endl;
				}else if(sum[i]>32000 && sum[i]<=64000){
					cout<<"case #"<<i<<" 64GB"<<endl;
				}else if (sum[i]>64000){
					cout<<"case #"<<i<<" 128GB"<<endl;
				}
			}
		 
		 
		 
	 }
