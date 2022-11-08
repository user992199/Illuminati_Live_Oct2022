#include<iostream>
using namespace std;
float sqroot(float n, int p){
	float i = 0;
	for(; ; i++){
		if(n<i*i){ // 5
			i--; // 4
			break;
		}else if(n==i*i){
			return i;
		}
	}
	for(;; i+= 0.1){ // 4.3
		if(n<i*i){
			i -= 0.1;
			break;
		}else if(n==i*i){
			return i;
		}
	}
	for(;; i+= 0.01){
		if(n<i*i){
			i -= 0.01;
			break;
		}else if(n==i*i){
			return i;
		}
	}
	return i;
}
int main(){
	float n;
	cin>>n;
	cout<<sqroot(n, 5)<<endl;
	return 0;
}