#include<iostream>
using namespace std;
float sqroot(float n, int p){ // 70 5
	float ans = 0, i = 1;
	for(int j = 0; j <= p; j++){ // 1 < 5
		for(; ; ans += i){ // 8.37
			if(n<ans*ans){ // 8.37*8.37 = 70.~
				ans -= i; // 8.36
				break;
			}else if(n==ans * ans){
				return ans;
			}
		}
		// ans = 8.36
		i /= 10; // i = 0.001
	}
	return ans;
}
int main(){
	float n;
	int p;
	cin>>n>>p;
	cout<<sqroot(n, p)<<endl;
	return 0;
}