#include <iostream>
using namespace std;
long long solve(){
	int p, q, r;
	cin>>p>>q>>r;
	long long ans = 1;
	while(p > 0 or q > 0 or r > 0){
		int count = 0;
		if(p & 1) count++;
		if(q & 1) count++;
		if(r & 1) count++;
		if(count == 1){
			return 0;
		}
		if(count == 3){
			ans *= 4;
		}
		p /= 2;
		q /= 2;
		r /= 2;
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
	return 0;
}