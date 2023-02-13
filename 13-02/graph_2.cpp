#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<cstring>

using namespace std;

template<typename T>
class _graph{
	void dfs_helper(T src, unordered_map<T, bool> &vis){
		vis[src] = true;
		cout<<src<<" ";
		for(auto neighbour: umap[src]){
			if(!vis[neighbour]){
				dfs_helper(neighbour, vis);
			}
		}
	}
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
	void bfs(T src){
		queue<T> q;
		unordered_map<T, bool> vis;
		q.push(src);
		vis[src] = true;
		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			for(auto neighbour: umap[node]){
				if(!vis[neighbour]){
					q.push(neighbour);
					vis[neighbour] = true;
				}
			}
		}
		cout<<endl;
	}
	int min_dist(T src, T des){
		queue<T> q;
		unordered_map<T, bool> vis;
		unordered_map<T, int> dist;
		unordered_map<T, T> par;
		q.push(src);
		dist[src] = 0;
		par[src] = src;
		vis[src] = true;
		while(!q.empty()){
			T node = q.front();
			q.pop();
			for(auto neighbour: umap[node]){
				if(!vis[neighbour]){
					q.push(neighbour);
					dist[neighbour] = dist[node] + 1;
					par[neighbour] = node;
					vis[neighbour] = true;
				}
			}
		}
		for(auto n: dist){
			cout<<n.first<<" : "<<n.second<<endl;
		}
		T des_temp = des;
		while(des_temp != src){
			cout<<des_temp<<"<-";
			des_temp = par[des_temp];
		}
		cout<<src<<endl;
		return dist[des];
	}
	void dfs(T src){
		unordered_map<int, bool> vis;
		int component = 1;
		dfs_helper(src, vis);
		for(auto node: umap){
			if(!vis[node.first]){
				dfs_helper(node.first, vis);
				component++;
			}
		}
		cout<<endl;
		cout<<"Total component(s): "<<component<<endl;
	}
};
int main(){
	_graph<int> g;

	g.add_edge(0, 1);
	g.add_edge(0, 3);
	g.add_edge(1, 2);
	g.add_edge(2, 3);
	g.add_edge(2, 4);
	g.add_edge(3, 4);
	g.add_edge(4, 5);
	g.add_edge(6, 7);
	g.add_edge(8, 7);
	g.add_edge(9, 10);
	g.add_edge(11, 9);
	g.add_edge(11, 10);

	int src = 0, des = 0;
	g.dfs(src);
	// cout<<g.min_dist(src, des)<<endl;
	// g.print();

	
	return 0;
}