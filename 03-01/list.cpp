#include<iostream>
#include<list>
using namespace std;
int main(){
	// auto i = 10;
	// auto k = "iabsfouabdsfooasdbvosdbv";
	// cout<<sizeof(i)<<" "<<i<<endl;
	// cout<<sizeof(k)<<" "<<k<<endl;

	// initializaing auto is compulsory
	// auto a; // this will result in an error

	// list <datatype> identifier;
	list <int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	l.push_front(10);
	l.push_front(9);
	l.push_front(8);
	l.push_front(7);
	l.push_front(6);

	for(auto i : l){
		cout<<i<<" -> ";
	}cout<<"NULL\n";
	
	l.pop_back();
	l.pop_front();

	for(auto i : l){
		cout<<i<<" -> ";
	}cout<<"NULL\n";




	for(auto &i:l){
		i++;
	}
	for(auto &i:l){
		cout<<i<<" -> ";
	}cout<<"NULL\n";

	return 0;
}