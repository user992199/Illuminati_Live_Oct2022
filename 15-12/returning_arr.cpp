#include<iostream>
using namespace std;
void print(int p[], int n){
	for(int i = 0; i < n; i++) cout<<p[i]<<" "; cout<<endl;
}
int * func(int n){
	int *k = new int[n];
	for(int i = 0; i < n; i++){
		k[i] = i+1;
	}
	return k;
}
int main(){
	int n = 10;
	int * p = func(n);
	print(p, n);
	delete []p;
	return 0;
}