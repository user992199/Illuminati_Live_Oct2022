#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
void reverse_queue(queue<int> &q){
	// base case
	if(q.empty()) return;
	// recursive case
	int x = q.front();
	q.pop();
	reverse_queue(q);
	q.push(x);
}
int main(){
	queue<int> q;
	int n = 6;
	while(n--){
		q.push(n);
	}
	print(q);
	reverse_queue(q);
	print(q);
	return 0;
}