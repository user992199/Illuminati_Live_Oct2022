#include<iostream>
#include<vector>
using namespace std;
class dsu{
public:
	vector<int> parent;
	int total_components;
	dsu(int n){
		total_components = n;
		parent.resize(n);
		for(int i = 0; i < n; i++){
			make_set(i);
		}
	}
	void make_set(int i){
		parent[i] = i;	
	}
	int get_set(int n){
		// base case
		if(n == parent[n]) return n;
		// recursive case
		// return get_set(parent[n]); // without path compression
		return parent[n] = get_set(parent[n]); // with pc
	}
	void union_set(int u, int v){
		int pu = get_set(u);
		int pv = get_set(v);
		if(pu != pv){
			parent[pu] = pv;
			// parent[pv] = pu;
			total_components--;
		}
	}
};
int main(){
	int n = 10;
	dsu d(n);
	d.union_set(0, 1);
	d.union_set(2, 3);
	d.union_set(3, 4);
	d.union_set(5, 7);
	d.union_set(6, 8);
	d.union_set(6, 5);
	d.union_set(6, 6);
	d.union_set(2, 2);
	for(int i = 0; i < n; i++){
		cout<<i<<" -> "<<d.parent[i]<<" -> "<<d.get_set(i)<<endl;
	}
	cout<<endl<<d.total_components<<endl;
	return 0;
}