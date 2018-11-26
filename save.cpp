//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=279&page=show_problem&problem=3834

#include <iostream>
using namespace std;

int main (){
	int T;
	int i;
	int m;
	int sum=0;
	
	string A;
	cin>>T;
	
	
	for(i=0;i<T;i++){
		cin>>A;
		if(A=="donate"){
			cin>>m;
			sum=sum+m;
		}
		else{
			cout<<sum<<endl;
		}
	}
	
	return 0;
}