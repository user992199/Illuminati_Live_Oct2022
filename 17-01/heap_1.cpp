#include<iostream>
#include<vector>
using namespace std;
class min_heap{
public:
	vector<int> v;
	min_heap(){
		v.push_back(-1); // zeroth index block ho jaye
	}
	void insert(int data){
		v.push_back(data);
		int c = v.size() - 1;
		int p = c / 2;
		while(v[p] > v[c] and p > 0){
			swap(v[p], v[c]);
			c = p;
			p = c/2;
		}
	}
};
int main(){
	min_heap m;
	int t;
	cin>>t;
	while(t != -1){
		m.insert(t);
		cin>>t;
	}
	for(int i = 1; i < m.v.size(); i++){
		cout<<m.v[i]<<" ";
	}cout<<endl;
	return 0;
}