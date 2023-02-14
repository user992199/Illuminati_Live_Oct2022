#include<iostream>
#include<unordered_map>
#include<list>
#include<cstring>
#include<set>
using namespace std;
template <typename T>
class _graph{
public:
	unordered_map<T, list< pair<T, int> > > umap;
	void add_edge(T u, T v, int weight, bool bidir = true){
		umap[u].push_back(make_pair(v, weight));
		if(bidir){
			umap[v].push_back(make_pair(u, weight));
		}
	}
	void print(){
		for(auto node: umap){
			cout<<node.first<<": ";
			for(auto neigh: node.second){
				cout<<neigh.first<<"("<<neigh.second<<") | ";
			}
			cout<<endl;
		}
	}
	void sssp(T src){
		unordered_map<T, int> dist;
		for(auto node: umap){
			dist[node.first] = INT_MAX;
		}
		set<pair<int, T> > s;
		s.insert(make_pair(0, src));
		dist[src] = 0;
		while(!s.empty()){
			auto np = *s.begin();
			int node_dist = np.first;
			T node = np.second;
			s.erase(s.begin());
			// iterate over all the neighbours of current node
			for(auto neighbour_pair: umap[node]){
				T neighbour = neighbour_pair.first;
				int dist_from_node = neighbour_pair.second;
				int dist_from_src = dist_from_node + dist[node];
				auto add = s.find(make_pair(dist[neighbour], neighbour));
				if(add != s.end()){
					if(dist[neighbour] > dist_from_src){					
						// updation
						s.erase(add);
						dist[neighbour] = dist_from_src;
						s.insert(make_pair(dist_from_src, neighbour));
					}
				}
				else if(dist[neighbour] == INT_MAX){
					dist[neighbour] = dist_from_src;
					s.insert(make_pair(dist_from_src, neighbour));
				}
			}
		}
		for(auto np: dist){
			cout<<np.first<<" -> "<<np.second<<endl;
		}
	}
};
int main(){
	_graph<string> g;
	g.add_edge("Amritsar", "Jaipur", 4);
	g.add_edge("Amritsar", "Agra", 1);
	g.add_edge("Jaipur", "Delhi", 2);
	g.add_edge("Agra", "Delhi", 1);
	g.add_edge("Agra", "Bhopal", 2);
	g.add_edge("Mumbai", "Bhopal", 3);
	g.add_edge("Jaipur", "Mumbai", 8);

	// g.print();
	string src = "Delhi";
	g.sssp(src);
	return 0;
}