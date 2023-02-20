#include<iostream>
using namespace std;
int max_sum(int * arr, int n){
	int * cs = new int[n];
	cs[0] = arr[0];
	for(int i = 1; i < n; i++){
		cs[i] = cs[i-1] + arr[i];
	}
	int ms = INT_MIN;
	for(int s = 0; s < n; s++){
		for(int e = s; e < n; e++){
			s > 0 ?
				ms = max(ms, cs[e] - cs[s-1]):
				ms = max(ms, cs[e]);
		}
	}
	return ms;
}
int main(){
	int arr[] = {1, -5, 6, 3, -2, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<max_sum(arr, n)<<endl;
	return 0;
}