#include<iostream>
#include<set>
using namespace std;
int main(){
	// set<pair<int, string> > s;
	// s.insert(make_pair(2, "Mango"));
	// s.insert(make_pair(3, "Apple"));
	// s.insert(make_pair(5, "Banana"));
	// s.insert(make_pair(10, "Pineapple"));
	// s.insert(make_pair(2, "Mango")); // ye kaam nahi kara hoga
	// s.insert(make_pair(7, "Mango")); // ye insert ho jayega
	// for(auto n: s){
	// 	cout<<n.first<<" - "<<n.second<<endl;
	// }
	// set<pair<string, int> > s;
	// s.insert(make_pair("Mango", 7)); // ye insert ho jayega
	// s.insert(make_pair("Mango", 2));
	// s.insert(make_pair("Apple", 3));
	// s.insert(make_pair("Banana", 5));
	// s.insert(make_pair("Pineapple", 10));
	// s.insert(make_pair("Mango", 2)); // ye kaam nahi kara hoga
	// for(auto n: s){
	// 	cout<<n.first<<" - "<<n.second<<endl;
	// }
	set<pair<int, int> > s;
	s.insert(make_pair(5, 7)); // ye insert ho jayega
	s.insert(make_pair(3, 2));
	s.insert(make_pair(4, -1));
	s.insert(make_pair(2, 5));
	s.insert(make_pair(1, 10));
	s.insert(make_pair(6, 2)); // ye kaam nahi kara hoga
	for(auto n: s){
		cout<<n.first<<" - "<<n.second<<endl;
	}
	auto address = s.find(make_pair(4, -1));
	if(address != s.end()){
		cout<<"found and killed\n";
		s.erase(address);
	}else{
		cout<<"not found\n";
	}
	s.insert(make_pair(4, 1));
	for(auto n: s){
		cout<<n.first<<" - "<<n.second<<endl;
	}
	return 0;
}