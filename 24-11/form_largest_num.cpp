#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void print(int arr[], int n ){
	for(int i = 0; i < n ; i++){
		cout<<arr[i];
	}cout<<endl;
}
int no_of_digits(int n){
	int i = 0;
	while(n>0){
		n /= 10;
		i++;
	}
	return i;
}
bool compare(int a, int b){
	int da = no_of_digits(a);
	int db = no_of_digits(b);
	// pow(10, db) => 10^db;
	int ab = a*pow(10, db) + b;
	int ba = b*pow(10, da) + a;
	return ab>ba;
}
bool compare2(int a, int b){
	string ab = to_string(a) + to_string(b);
	string ba = to_string(b) + to_string(a);
	return ab>ba;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n ; i++){
			cin>>arr[i];
		}
		// int arr[] = {9, 98, 2, 25};
		// int n = sizeof(arr)/sizeof(arr[0]);
		sort(arr, arr+n, compare2);
		print(arr, n);
	}
	return 0;
}