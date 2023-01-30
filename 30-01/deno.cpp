#include<iostream>
using namespace std;
void print(int * arr, int n){
	cout<<"Array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int find_coin_td(int amt, int * coin, int n, int * fc){
	// base case
	if(amt == 0) return fc[0] = 0;
	// recursive case
	// check before calculate
	if(fc[amt] >= 0) return fc[amt];
	int ans = INT_MAX;
	for(int i = 0; i < n; i++){
		int left_amt = amt - coin[i];
		if(left_amt < 0) continue;
		int curr_op = find_coin_td(left_amt, coin, n, fc); // +inf
		if(curr_op != INT_MAX)
			ans = min(ans, curr_op + 1); // +inf + 1
	}
	// store before return
	return fc[amt] = ans;
}
int find_coin_bu(int amt, int * coins, int n){
	int * fc = new int [amt+1];
	fc[0] = 0;
	// finding min number of coins required from each possible amount
	for(int curr_amt = 1; curr_amt <= amt; curr_amt++){ // 1 -> amt => amt
		int ans = INT_MAX;
		// finding min number of coins required for current amount
		for(int i = 0; i < n; i++){ // 0 -> n => n+1
			int left_amt = curr_amt - coins[i];
			if(left_amt>=0){
				ans = min(ans, fc[left_amt] + 1);
			}
		}
		fc[curr_amt] = ans;
	}
	print(fc, amt+1);
	return fc[amt];
}
int find_coin(int amt, int * coin, int n){
	// base case
	if(amt == 0) return 0;
	// recursive case
	int ans = INT_MAX;
	for(int i = 0; i < n; i++){
		int left_amt = amt - coin[i];
		if(left_amt < 0) continue;
		int curr_op = find_coin(left_amt, coin, n); // +inf
		if(curr_op != INT_MAX)
			ans = min(ans, curr_op + 1); // +inf + 1
	}
	return ans;
}
int main(){
	// 1423 + 1 + 2
	int amt = 100;
	int deno[] = {1, 3, 7, 10, 100};
	int n = sizeof(deno)/sizeof(deno[0]);
	int *final_coins = new int[amt+1];
	memset(final_coins, -1, (amt+1)*4);

	// for(int i = 0; i <= amt; i++) final_coins[i] = -1;
	// cout<< find_coin(amt, deno, n) <<endl;
	cout<<"TOP DOWN:-\n";
	cout<<"ans: "<< find_coin_td(amt, deno, n, final_coins) <<endl;
	print(final_coins, amt+1);
	cout<<"////////////////////\n";
	cout<<"bottom up:-\n";
	int x = find_coin_bu(amt, deno, n);
	cout<<"ans: "<< x <<endl;
	cout<<"////////////////////\n";
	// for(int i = 0; i <= amt; i++){
	// 	cout<<final_coins[i]<<" ";
	// }cout<<endl;

	return 0;
}