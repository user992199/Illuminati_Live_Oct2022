#include<iostream>
using namespace std;
int main(){
	int i = 0;
	for(;;){
		if(i >= 10){
			break;
		}
		if(i == 5){
			i++;
			continue;
		}
		cout<<i<<" ";
		i++;
	}
	cout<<endl;
	for(int j = 0; j < 10; j++){
		if(j == 5){
			continue;
		}
		cout<<j<<" ";
	}
	cout<<endl;
	return 0;
}