#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans = 0;
	while(n--){
		int t;
		cin>>t;
		ans ^= t;
	}
	cout<<ans<<endl;
	return 0;
}