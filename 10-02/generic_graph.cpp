#include<iostream>
#include<unordered_map>
#include<list>
#include<cstring>

using namespace std;

template<typename T>
class _graph{
public:
	unordered_map<T, list<T> > umap;
	void add_edge(T u, T v, bool bidirectional = true){
		umap[u].push_back(v);
		if(bidirectional){
			umap[v].push_back(u);
		}
	}
	void print(){
		for(auto node: umap){
			cout<<node.first<<" -> ";
			for(auto neighbour: node.second){
				cout<<neighbour<<" ";
			}cout<<endl;
		}
	}

	bool check_edge(T u, T v){
		for(auto neighbour: umap[u]){
			if(neighbour == v){
				return true;
			}
		}
		return false;
	}
};
int main(){
	_graph<string> g;
	g.add_edge("Putin", "Modi", false);
	g.add_edge("Putin", "Trump", false);
	g.add_edge("Putin", "Pope", false);
	g.add_edge("Modi", "Trump");
	g.add_edge("Modi", "Yogi");
	g.add_edge("Yogi", "Prabhu", false);
	g.add_edge("Prabhu", "Modi", false);

	g.print();
	if(g.check_edge("Modi", "Trump")){
		cout<<"\nModi -> Trump exists\n";
	}
	if(g.check_edge("Prabhu", "Pope")){
		cout<<"\nPrabhu -> Pope exists\n";
	}
	cout<<endl;

	// _graph<int> g;

	// g.add_edge(0, 1);
	// g.add_edge(3, 1);
	// g.add_edge(5, 1);
	// g.add_edge(2, 1);
	// g.add_edge(2, 4);
	// g.add_edge(3, 4);
	// g.add_edge(5, 3);
	// g.add_edge(2, 5);

	// g.print();

	// if(g.check_edge(2, 3)){
	// 	cout<<"2 -> 3 exists\n";
	// }
	// else if(g.check_edge(1, 5)){
	// 	cout<<"1 -> 5 exists\n";
	// }
	// cout<<endl;
	return 0;
}