#include<iostream>
#include<cmath>
using namespace std;
int discount_coupon(int m, int n, int x, int y){
	int s = 0, e = m;
	int mid, ans = 0;
	while(s<=e){
		mid = (s+e)/2;
		if((n + (m-mid)*y)>=(mid*x)){
			ans = mid;
			s = mid+1;
		}
		else{
			e = mid-1;
		}
	}
	return ans;
}
int main(){
	int m = 10, n = 10, x = 5, y = 1;
	// cin>>m>>n>>x>>y;
	cout<<discount_coupon(m, n, x, y)<<endl;
	cout<<pow(i, k)<<endl;
	return 0;
}