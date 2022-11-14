#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 3rd Method
	// vector<datatype> new_identifier(no_of_buckets);
	vector<int> v(10); // int arr[10] = {0};
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}