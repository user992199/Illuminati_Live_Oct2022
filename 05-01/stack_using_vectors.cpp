#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class stack{
	vector<T> v;
public:
	void push(T d){
		v.push_back(d);
	}
	void pop(){
		v.pop_back();
	}
	bool empty(){
		return v.size() == 0;
	}
	T top(){
		return v[v.size() - 1];
	}
};
int main(){
	stack<int> s;
	int n = 130;
	for(int i = 1; i <= n; i++){
		s.push(i);
	}
	// for(;!s.empty();)
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}