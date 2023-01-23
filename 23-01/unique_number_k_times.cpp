#include<iostream>
using namespace std;
void add_bits(int n, int * bitsum, int k){
	// 32 iterations
	for(int i = 0; i < 32; i++){
		bitsum[i] += (n & 1);
		bitsum[i] %= k;
		n >>= 1;
	}
}
int main(){
	int arr[] = {1, 2, 3, 4, -5, -1, 4, 3, 2, 1, 1, 2, 3, 4, -1, -1};
	int k = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	int bitsum[32] = {0};
	// n iterations
	for(int i = 0; i < n; i++){
		// 32 iterations
		add_bits(arr[i], bitsum, k);
	}
	int ans = 0, fact = 1;
	// 32 iterations
	for(int i = 0; i < 32; i++){
		ans += bitsum[i] * fact;
		fact *= 2;
	}
	cout<<ans<<endl;
	return 0;
}