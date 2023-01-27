#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
	map<string, int> m;
	unordered_map<string, int> um;
	um.insert(make_pair("e-mail", 45));
	pair<string, int> p ("ball", 11);
	um.insert(p);
	um["char"] = 999;
	um.insert(make_pair("dove", 888));
	um["apple"] = 155;


	m.insert(make_pair("e-mail", 45));
	m.insert(p);
	m["char"] = 999;
	m.insert(make_pair("dove", 888));
	m["apple"] = 155;
	m.insert(make_pair("apple", 45));

	for(int i = 0; i < um.bucket_count(); i++){
		cout<<"i: "<<i<<" -> ";
		for(auto it = um.begin(i); it != um.end(i); it++){
			cout<<it->first<<": "<<it->second<<"; ";
		}cout<<endl;
	}
	cout<<endl;
	for(int i = 0; i < m.bucket_count(); i++){
		cout<<"i: "<<i<<" -> ";
		for(auto it = um.begin(i); it != um.end(i); it++){
			cout<<it->first<<": "<<it->second<<"; ";
		}cout<<endl;
	}
	cout<<endl;
	return 0;
}