#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; // 4
	int cost[n];
	for(int i = 0; i < n; i++){
		cin>>cost[i]; // 100 200 400 100
	}
	int q; 
	cin>>q; // q = 5
	while(q--){ // q = 4
		int money, k, vo = 0;
		cin>>money>>k; // money = 100; k = 2
		//                                    0   1   2   3
		for(int i = 0; i < n; i++){ // i = 3; 100 200 400 100
			if(money%cost[i] == 0){ // (100 % 100 = 100) == 0
				vo++; // vo = 2
			}
		}
		// 2>=2 ? // yes
		vo>=k ? cout<<"Yes\n" : cout<<"No\n";
	}
	return 0;
}