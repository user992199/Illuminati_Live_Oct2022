#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
	list <int> l;
	l.push_back(5);
	l.push_back(4);
	l.push_back(3);
	l.push_back(3);
	l.push_back(3);
	l.push_back(2);
	l.push_back(1);

	for(list<int> :: iterator it = l.begin(); it != l.end(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";
	// list<int> :: iterator it = l.end();
	// it--;
	// for(; ; it--){
	// 	cout<<*it<<" -> ";
	// 	if(it == l.begin()) break;
	// }cout<<"NULL\n";
	for(list<int> :: reverse_iterator it = l.rbegin(); it != l.rend(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";

	for(auto it = l.begin(); it != l.end(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";

	for(auto it = l.rbegin(); it != l.rend(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";

	for(auto it = l.begin(); it != l.end(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";

	int pos = 3;
	auto it = l.begin();
	for(int i = 0; i < pos; i++){
		it++;
	}

	l.insert(it, 100);
	it = l.begin();
	for(int i = 0; i < pos; i++){
		it++;
	}
	for(auto it = l.begin(); it != l.end(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";

	l.remove(3);
	l.erase(it);

	for(auto it = l.begin(); it != l.end(); it++){
		cout<<*it<<" -> ";
	}cout<<"NULL\n";
	return 0;
}