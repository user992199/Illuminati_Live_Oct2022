#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.reserve(3);
	int i = 1;
	v.push_back(i++);
	v.push_back(i++);
	v.push_back(i++);
	v.push_back(i++);
	v.push_back(i++);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	v.push_back(i++);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	return 0;
}