#include <iostream>
using namespace std;

int main (){
	int T, i, m, sum=0;
	int arr[99];
	string A;
	cin>>T;
	
	
	for(i=0;i<T;i++){
		cin>>A;
		if(A=="donate"){
			cin>>m;
			sum=sum+m;
		}
		else{
			//nothing
		}
		arr[i+1]=m;
	}
	for(i=0;i<(T/2);i++){
		cout << arr[i+2] << endl;
		arr[i+3] = arr[i+2] + arr[i+3];
	}
	
	return 0;
}
