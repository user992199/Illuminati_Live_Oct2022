#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 4th Method
	// vector<datatype> new_identifier(no_of_buckets, value);
	vector<int> v(10, 8); // int arr[10] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}