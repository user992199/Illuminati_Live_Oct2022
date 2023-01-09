#include<iostream>
#include<queue>
// #include<stack>
using namespace std;
template<typename T>
class stack{
	queue<T> q1, q2;
public:
	void push(int d){
		if(q1.empty() and q2.empty())	q1.push(d);
		else if(q1.empty())	q2.push(d);
		else	q1.push(d);
	}
	void pop(){
		if(q1.empty() and q2.empty()){
			cout<<"Underflow\n";
			// return q1.front();
		}
		else if(q1.empty()){
			while(q2.size() > 1){
				q1.push(q2.front());
				q2.pop();
			}
			// cout<<"popped from q2\n";
			q2.pop();
		}else{
			while(q1.size() > 1){
				q2.push(q1.front());
				q1.pop();
			}
			// cout<<"popped from q1\n";
			q1.pop();
		}

	}
	T top(){
		if(q1.empty() and q2.empty()){
			cout<<"Underflow\n";
			return -1;
			// return q1.front();
		}
		else if(q1.empty()){
			while(q2.size() > 1){
				q1.push(q2.front());
				q2.pop();
			}
			T x = q2.front();
			q1.push(q2.front());
			q2.pop();
			// cout<<"brought to you by q2: ";
			return x;	
		}else{
			while(q1.size() > 1){
				q2.push(q1.front());
				q1.pop();
			}
			T x = q1.front();
			q2.push(q1.front());
			q1.pop();
			// cout<<"brought to you by q1: ";
			return x;	
		}
	}
	bool empty(){
		return q1.empty() and q2.empty();
	}
};
int main(){
	stack<int> s;
	// cout<<s.top();
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}