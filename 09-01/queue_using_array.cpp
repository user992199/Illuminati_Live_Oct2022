#include<iostream>
using namespace std;
template<typename T>
class queue{
	T * arr;
	int f, e, curr_size, n;
public:
	queue(){
		int size = 100;
		arr = new T[size];
		f = 0;
		e = size - 1;
		curr_size = 0;
		n = size;
	}
	queue(int size){
		arr = new T[size];
		f = 0;
		e = size - 1;
		curr_size = 0;
		n = size;
	}
	void push(T d){
		if(curr_size == n){
			cout<<"Overflow "<<d<<endl;
			return;
		}else{
			e = (e+1)%n;
			arr[e] = d;
			curr_size++;
		}
	}
	void pop(){
		if(curr_size == 0){
			cout<<"Underflow\n";
			return;
		}
		else{
			f = (f+1)%n;
			curr_size--;
		}
	}
	T front(){
		return arr[f];
	}
	bool empty(){
		// return !curr_size;
		return curr_size == 0;
	}
};
int main(){
	queue<int> q(10);
	q.pop();
	for(int i = 2; i <= 30; i += 2)
		q.push(i);
	while(!q.empty()){
		cout<< q.front() << " ";
		q.pop();
	}
	cout<<endl;
	q.pop();
	return 0;
}