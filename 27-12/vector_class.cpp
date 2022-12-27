#include<iostream>
using namespace std;
template<typename T> 
class vec{
public:
	T * ptr;
	int s;
	int cap;
	vec(){
		ptr = 0;
		s = 0;
		cap = 0;
	}
	vec(int n){
		ptr = new T[n];
		for(int i = 0; i < n; i++){
			ptr[i] = 0;
		}
		s = n;
		cap = n;
	}
	vec(T n, T val){
		ptr = new T[n];
		for(int i = 0; i < n; i++){
			ptr[i] = val;
		}
		s = n;
		cap = n;
	}
	// push back
	void push_back(int val){
		if(s < cap){
			ptr[s] = val;
			s++;
		}
		else{
			if(cap == 0){
				ptr = new T;
				ptr[s] = val;
				s++;
				cap++; 
			}
			else if(cap == s){
				T *optr = ptr;
				cap *= 2;
				ptr = new T[cap];
				int i;
				for(i = 0; i < s; i++){
					ptr[i] = optr[i];
				}
				for(; i < cap; i++){
					ptr[i] = 0;
				}
				delete []optr;
				ptr[s] = val;
				s++;
			}
			else{
				cout<<"somethings wrong i can feel it\n";
			}
		}
	}
	// pop back
	void pop_back(){
		if(s != 0){
			s--;
		}
	}
	// size
	int size(){
		return s;
	}
	// capacity
	int capacity(){
		return cap;
	}
	// clear
	void clear(){
		s = 0;
	}
	// empty
	bool empty(){
		return s == 0 ? true : false;
	}
	T operator[](int i){
		return ptr[i];
	}
};
int main(){
	vec<int> v(5, '^');
	v.push_back('c');
	v.push_back('a');
	v.push_back('k');
	// v.push_back(10);
	// v.push_back(15);
	// v.push_back(20);
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	return 0;
}