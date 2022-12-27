#include<iostream>
#include<vector>
using namespace std;
int main(){
	// int n = 5;
	// int val = 3;
    // 1st Method
	// vector<int> v = {0, 1, 2, 3, 4};
    // 2nd Method
    // vector<int> v(n);
    // 3rd Method
    // vector <int> v(n, -6);
    // 4th Method
    // vector<int> v({1, 2, 3, 4, 5});
    // 5th Method
	// int arr[] = {12, 15, 18, 19, 26};
	// int size_of_arr = sizeof(arr)/sizeof(arr[0]);
	// vector<int> v(arr, arr+size_of_arr);
	vector<int> v(10, 4);
	// 6th Method
	vector<int> v2(v);
	for(int i = 0; i < v.size(); i++){
		cout<<++v[i]<<" ";
	}
	cout<<endl;
	// for(int i = 0; i < v2.size(); i++){
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<endl;
	cout<<v.capacity()<<endl;
	v.push_back(16);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	return 0;
}