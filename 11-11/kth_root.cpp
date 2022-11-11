#include<iostream>
#include<cmath>
using namespace std;
int kth_root(int n, int k){ // n = 1000, k = 3
	int s = 0, e = n, ans = 0; // s = 0, e = 1000, ans = 0
	for(; s<=e;){ // e = 13, s = 7
		int mid = (s+e)/2; // mid = 10
		long long int ikth = pow(mid, k); // 10^3
		if(ikth < n){
			ans = mid; // ans = 6
			s = mid+1;
		}else if(n == ikth){
			return mid; // 10
		}else{
			e = mid-1;
		}
	}
	return ans;
}
int main(){
	int n = 1000, k = 1;
	cout<<pow(n, 1.0/k)<<endl;
	// cin>>n>>k;
	cout<<kth_root(n, k)<<endl;
	return 0;
}