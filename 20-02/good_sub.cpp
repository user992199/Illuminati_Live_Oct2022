#include<iostream>
using namespace std;
int gs(int * arr, int n){
	int * cs = new int[n];
	int * freq = new int[n];
	cs[0] = arr[0] % n;
	for(int i = 1; i < n; i++){
		cs[i] = (cs[i-1] + arr[i]) % n;
	}
	memset(freq, 0, n*sizeof(freq[0]));
	freq[0] = 1;
	for(int i = 0; i < n; i++){
		freq[cs[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += (freq[i]) * (freq[i]-1) / 2;
	}
	return ans;
}
int main(){
	int arr[] = {1, 3, 2, 4, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<gs(arr, n)<<endl;
	return 0;
}