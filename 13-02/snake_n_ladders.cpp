#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
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
		// for(auto n: par){
		// 	cout<<n.first<<" : "<<n.second<<endl;
		// }
		T des_temp = des;
		while(des_temp != src){
			cout<<des_temp<<"<-";
			des_temp = par[des_temp];
		}
		cout<<src<<endl;
		return dist[des];
	}
	void dfs(T src, unordered_map<T, bool> &vis){
		vis[src] = true;
		cout<<src<<" -> ";
		for(auto neighbour: umap[src])
			if(!vis[neighbour])
				dfs(src, vis);
	}
};
int main(){
	_graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;
	
	for(int u = 0; u < 36; u++){
		for(int dice = 1; dice <= 6; dice++){
			int v = (u + dice) + board[u+dice];
			g.add_edge(u, v, false);
		}
	}
	int src = 0, des = 36;
	cout<<g.min_dist(src, des)<<endl;
	// g.print();
	return 0;
}