#include <iostream>
using namespace std;

int main(){
	int i=1, j=0;
	string a, arr[99];
	
	while(arr[j]!="*"){
		j = j + 1;
		cin >> arr[j];
		}
		
	for(int k=1;k<j;k++){
		if(arr[k]=="Hajj"){
			cout << "Case " << i << " : " << "Hajj-e-Akbar" << endl;
		} else if(arr[k]=="Umrah"){
			cout << "Case " << i << " : " << "Hajj-e-Asghar" << endl;
		}
		i = i + 1;
	}
	
	return 0;
}
