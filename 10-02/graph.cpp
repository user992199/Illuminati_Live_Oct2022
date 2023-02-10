#include<iostream>
#include<list>
using namespace std;
class _graph{
public:
	int n;
	list<int> * adj_list;
	_graph(int N){
		n = N;
		adj_list = new list<int>[n];
	}
	void add_edge(int u, int v, bool bidirectional = true){
		adj_list[u].push_back(v);
		if(bidirectional){
			adj_list[v].push_back(u);
		}
	}
	void print(){
		for(int i = 0; i < n; i++){
			cout<<i<<" -> ";
			for(auto neighbour: adj_list[i]){
				cout<<neighbour<<" ";
			}cout<<endl;
		}
	}
	bool check_edge(int u, int v){
		for(auto neighbour: adj_list[u]){
			if(neighbour == v){
				return true;
			}
		}
		return false;
	}
};
// myNameIsShubhyank -> camelCase
// my_name_is_shubhyank -> snake_case
int main(){
	_graph g(6);

	g.add_edge(0, 1);
	g.add_edge(3, 1);
	g.add_edge(5, 1);
	g.add_edge(2, 1);
	g.add_edge(2, 4);
	g.add_edge(3, 4);
	g.add_edge(5, 3);
	g.add_edge(2, 5);

	g.print();

	if(g.check_edge(2, 3)){
		cout<<"2 -> 3 exists\n";
	}
	else if(g.check_edge(1, 5)){
		cout<<"1 -> 5 exists\n";
	}
	return 0;
}