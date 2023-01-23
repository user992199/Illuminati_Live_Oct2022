#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int * arr = new int[n];
	int a = 0, z = 0, nz = 0, b = 0, mask = 1;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
		a ^= arr[i];
	}

	while((a&1) == 0){
		b++;
		a >>= 1;
	}

	mask <<= b;
	for(int i = 0; i < n; i++){
		if((arr[i] & mask) == 0){
			z ^= arr[i];
		}else{
			nz ^= arr[i];
		}
	}
	cout<<min(z, nz)<<" "<<max(z, nz)<<endl;
	return 0;
}