#include<iostream>
#include<queue>
#include<functional> // for greater and less class
using namespace std;
class compare{
public:
	bool operator() (int a, int b){
		return a > b;
	}
};
int main(){
	// by default stl creates max heap
	// priority_queue<int> m;
	// syntax to create min heap using stl
	/*
	priority_queue<int, vector<int>, class_identifier>
	*/
	// min heap using custom class
	// priority_queue<int, vector<int>, compare> m;
	// min heap using inbuilt greater class
	// priority_queue<int, vector<int>, greater<int> > m;
	// max heap using inbuilt less class
	priority_queue<int, vector<int>, less<int> > m;
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