#include<iostream>
using namespace std;
int tallest(int arr[], int s, int e){
	int t = arr[s++];
	while(s<=e){
		t = max(t, arr[s++]);
	}
	return t;
}                                            ///
int rainwater(int arr[], int n){ // 3 0 0 2 0 4
	int ans = 0; // ans = 10
	for(int i = 0; i < n; i++){ // i = 5
		int lt = tallest(arr, 0, i); // lt = 4
		int rt = tallest(arr, i, n-1); // rt = 4
		ans += min(lt, rt) - arr[i]; // ans += 4 - 4
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		cout<<rainwater(arr, n)<<endl;
	}
	return 0;
}