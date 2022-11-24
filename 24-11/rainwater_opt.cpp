#include<iostream>
using namespace std;
int rainwater(int arr[], int n){ // 3 0 0 2 0 4
	int ans = 0; // ans = 10
	int rt[n], lt[n];
	lt[0] = arr[0];
	for(int i = 1; i < n; i++){
		lt[i] = max(lt[i-1], arr[i]);
	}
	rt[n -1] = arr[n-1];
	for(int i = n-2; i > -1; i--){
		rt[i] = max(rt[i+1], arr[i]);
	}
	for(int i = 0; i < n; i++){ // i = 5
		ans += min(lt[i], rt[i]) - arr[i]; // ans += 4 - 4
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