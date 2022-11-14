#include<iostream>
#include<vector>
using namespace std;
int main(){
	// syntax 
	// 1st Method
	// vector<datatype> identifier = {elements};
	vector<int> v = {0, 1, 2, 3, 4, 5, 6};
	// 2nd Method
	// vector<datatype> new_identifier(another vector);
	vector<int> v1(v);
    v1[0] = 10;
    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    // 3rd Method
	// vector<datatype> new_identifier(no_of_buckets);
	vector<int> v2(10);
	cout<<v2.size()<<endl;
	cout<<v2.capacity()<<endl;
	return 0;
}