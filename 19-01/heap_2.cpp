#include<iostream>
#include<vector>
using namespace std;
class min_heap{
	vector<int> v;
	void heapify(int i){
		int lc, rc, mi;
		mi = i;
		lc = i * 2;
		rc = i * 2 + 1;
		if(lc < v.size() and v[lc] < v[mi]) mi = lc;
		if(rc < v.size() and v[rc] < v[mi]) mi = rc;
		if(i != mi){
			swap(v[i], v[mi]);
			heapify(mi);
		}
	}
public:
	min_heap(){
		v.push_back(-1); 
	}
	void push(int data){
		v.push_back(data);
		int c = v.size() - 1;
		int p = c / 2;
		while(v[p] > v[c] and p > 0){
			swap(v[p], v[c]);
			c = p;
			p = c/2;
		}
	}
	void pop(){
		if(v.size() == 1) return;
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}
	int top(){
		return v[1];
	}
	bool empty(){
		return v.size() == 1;
	}
};
int main(){
	min_heap m;
	int t;
	cin>>t;
	while(t != -1){
		m.push(t);
		cin>>t;
	}
	while(!m.empty()){
		cout<<m.top()<<" ";
		m.pop();
	}cout<<endl;
	return 0;
}