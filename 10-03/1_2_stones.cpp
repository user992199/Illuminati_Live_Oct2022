#include <iostream>
using namespace std;
// true  -> chef
// false -> chefina
bool solve(){
	int x, y;
	cin>>x>>y;
	int diff = abs(x-y);
	if(diff > 1){
		return x > y ? true : false;
	}else if(diff == 0){
		return x % 2 ? true : false;
	}else{
		return max(x, y) % 2 ? false : true;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		solve() ? cout<<"CHEF\n" : cout<<"CHEFINA\n";
	}
	return 0;
}